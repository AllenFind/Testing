#include <algorithm>
#include<iostream>

int main(){
	int a[3] = {1,3,4};
	int b[3];
	std::transform(a, a + 2, b );
	return 0;
}

