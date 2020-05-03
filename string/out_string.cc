#include<iostream>
#include <sstream>

int main()
{
	std::stringstream log;
	log<<"hello world";
	std::cout<<log.str()<<std::endl;

	return 0;
}
