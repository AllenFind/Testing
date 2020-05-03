#include<thread>
#include<iostream>
#include<unistd.h>


using namespace std;

void thread_function(){
	cout<<"I am a new thread"<<endl;
	usleep(2000);
	cout<<"this message is unlikely to show"<<endl;
}


int main(){
	thread t1(thread_function);
//	t1.join();
	t1.detach();
	cout<<"I am master thread and I am about to finish"<<endl;
	
	return 0;
}
