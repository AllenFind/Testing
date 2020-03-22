#include<iostream>

void passing_array(int * arr )
{
	for(int i = 0; i<10; ++i)
		std::cout<<arr[i]<<std::endl;
}

int main()
{
	int a[10] = {1,2,3,4,5};
	passing_array(a);
	return 0;
}
