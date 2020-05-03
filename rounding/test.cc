#include<iostream>

int round_up_128(int x)
{
	return ((x + 128 -1) & ~(128 -1));
}

int round_up_32(int x)
{
	return ((x + 32 -1) & ~(32 -1));
}

int round_up_8(int x)
{
	return ((x + 8 -1) & ~(8 -1));
}


int upper_power_of_two(int v)
{
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++;
    return v;

}

int main()
{
	std::cout<<"the 128 is "<<round_up_128(128)<<std::endl;
	std::cout<<"the 69 is "<<round_up_32(69)<<std::endl;	
	std::cout<<"the 8 is "<<round_up_8(69)<<std::endl;
	std::cout<<"the 32 is "<<upper_power_of_two(32)<<std::endl;
	return 0;
}
