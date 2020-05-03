#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ilist={1,2,3,4,5};
	for(vector<int>::iterator it = ilist.begin(); it != ilist.end();it++)
		if(*it == 4) cout<<"This is what we found"<<endl;
	return 0;
}

