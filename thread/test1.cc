#include<thread>
#include<iostream>


using namespace std;

void thread_function(){
	cout<<"I am a new thread"<<endl;
}


int main(){
	thread t1(thread_function);
	t1.join();
	return 0;
}
