//open_record function call determines if the record to be constructed
//is going to be consumed by at least one sink
// record processing can be completed with the cal to push_record
#include <boost/move/utility.hpp>
#include <boost/log/sources/logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
#include <boost/log/sources/global_logger_storage.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>

namespace logging = boost::log;
namespace src  = boost::log::sources;
namespace keywords = boost::log::keywords;

BOOST_LOG_INLINE_GLOBAL_LOGGER_DEFAULT(my_logger, src::logger_mt);

void logging_function1()
{
	src::logger lg;
	logging::record rec = lg.open_record();
	if(rec)
	{
		logging::record_ostream strm(rec);
		strm << "Hello, World!";
		strm.flush();
		lg.push_record(boost::move(rec));
	}
}

void logging_function2()
{
	src::logger_mt& lg = my_logger::get();
	BOOST_LOG(lg) << "Greetings from the global logger!";
}

int main(int, char*[])
{
	logging::add_file_log("sample.log");
	logging::add_common_attributes();

	logging_function1();
	logging_function2();
	return 0;
}

