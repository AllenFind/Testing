#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main()

{
	std::vector<int>aa(2,0);
	std::cout<<"the aa is "<<aa[0]<<std::endl;
	double a[3] = {1,2,3};
	double b[3];
  copy(begin(a),end(a),begin(b));
	std::cout<<"the b is"<<b[0]<<b[1]<<b[2]<<std::endl;
	return 0;
}
