#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
	vector<int>aa{1,2,3,4,5};
	vector<int>::iterator it = lower_bound(aa.begin(),aa.end(),5);
	cout<<"the it is "<<*it<<endl;
	cout<<"the it -1 is "<<*(it-1)<<endl;
	aa.erase(aa.begin(), it+1);
	for(int i=0; i<aa.size(); i++)
	{
		cout<<"the "<<i<<":"<<aa[i]<<endl;
	}
	return 0;
}
