#include<iostream>

#ifdef A
#define B 10
#elif A1
#define B 20
#else
#define B 30
#endif

int main()
{
	std::cout<<"the B is "<<B<<std::endl;
	return 0;
}
