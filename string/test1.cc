#include<iostream>
#include<string>
#include<cstring>


int main()
{
  using namespace std;
  char charr[20];
	string str;
	cout<<"len of sting in charr before input:"
			<<strlen(charr)<<endl;
	cout<<"len of sting in str before input: "
			<<str.size()<<endl;
	cout<<"Enter a line of text: \n";
	cin.getline(charr,20);
	cout<<"you entered: "<<charr<<endl;
	cout<<"Enter another line of text: \n";
	getline(cin,str);
	cout<< "you entered: "<< str<<endl;

	cout<<"len of sting in charr after input:"
			<<strlen(charr)<<endl;
	cout<<"len of sting in str after input: "
			<<str.size()<<endl;
	string str2;
	str2 = str + charr;
	cout<<"the str2 is "<<str2<<endl;
  return 0;
}
