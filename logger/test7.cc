#include<iostream>
//this is for the own debugger 

using namespace std;

int main()
{
#ifdef LEVEL_ONE
cout<<"I am the LEVEL_ONE"<< endl;
#elif LEVEL_TWO
cout<<"I am the LEVEL_TWO"<<endl;
#else 
cout<<"I am the NO"<<endl;
#endif
return 0;

}
