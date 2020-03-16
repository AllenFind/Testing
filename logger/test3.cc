//the sinks composed two classes: frontend and backend
//the frontend is responsible for various common tasks for all sinks
//the backend implements everything specific to the sink
//the synchronoous_sink indicates that the sink is synchronous,it allows
//for several threads to log simultaneously and will block in case of
//contention. so the backend text_ostream_backend doesn't have to worry 
//about multithreading at all. 
//text_ostream_backend writes formatted log records into STL-compatible
//streams. We could have used any type of stream. 
//the locked_backend member function call to access the sink. it's used
//to get thread-safe access to the abckedn and is provided by all sink
//frondends. This function returns a smart-pointer to the backend as long
//as it exists the backend is locked. The only exception is the unlocked_sink
//frontend which does not synchronize at all and simply returns an unlocked 
//pointer to the backend.

#include <fstream>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <boost/smart_ptr/make_shared_object.hpp>
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/sinks/sync_frontend.hpp>
#include <boost/log/sinks/text_ostream_backend.hpp>
#include <boost/log/sources/logger.hpp>
#include <boost/log/sources/record_ostream.hpp>

namespace logging = boost::log;
namespace src = boost::log::sources;
namespace sinks = boost::log::sinks;

void init()
{
	typedef sinks::synchronous_sink<sinks::text_ostream_backend> text_sink;
	boost::shared_ptr<text_sink> sink = boost::make_shared<text_sink>();
	//add a stream to write log to 
	sink->locked_backend()->add_stream(
			boost::make_shared<std::ofstream>("sample.log"));

	//register the sink in the logging core
	logging::core::get()->add_sink(sink);

}

int main(int, char*[])
{
	init();
	src::logger lg;
	BOOST_LOG(lg) << "Hello World!";
	return 0;
}
