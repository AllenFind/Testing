#include<iostream>

enum test
{
	a=0,
	b=1,
	c=2
};

int main()
{
	test new_test = test(3);
	std::cout<<"the test is " << test(0)<<std::endl;

	std::cout<<"the test is " << test(1)<<std::endl;
	std::cout<<"the test is " << test(2)<<std::endl;
	std::cout<<"the test is " << new_test<<std::endl;
	return 0;

}
