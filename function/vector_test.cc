#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	using  std::vector;
	vector<int> a={11,2,34,5};
	std::sort(a.begin(),a.end());
	vector<int>::iterator it=std::lower_bound(a.begin(),a.end(),1);
	std::cout<<"the upper is: "<<*it<<std::endl;
	return 0;
}
