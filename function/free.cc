#include<iostream>
#include<vector>

using namespace std;
struct ss{
	int a ; 
  ss():a(0){};
};


int main()
{
	ss *pp = new ss();	
	pp->a = 2;
	cout<<"pp"<<(pp->a)<<endl;
	delete pp;
	delete pp;
	return 0;
}
