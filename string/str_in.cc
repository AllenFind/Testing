#include<iostream>
#include<string>
#include<istream>

using namespace std;
int main()
{
	char info[100];
	cout<<"enter you line"<<endl;
	cin>>info;
	cout<<"the info is "<<info<<endl;
	string  info_s;
	cin>>info_s;
	cout<<"the info_s is"<<info_s<<endl;
	string info_s1;
	getline(cin,info_s1);
	cout<<"the info_s1 is"<<info_s1<<endl;
	return 0;
}
