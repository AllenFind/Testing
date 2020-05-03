#include<thread>
#include<iostream>
#include<string>
#include<vector>


using namespace std;

void func(int i, string s)
{
	cout<<i<<","<<s<<","<<this_thread::get_id()<<endl;
}

int main(){
	vector<thread> threads;
	for(int i = 0; i<10; i++){
		threads.push_back(thread(func,i, "test"));
	}
	for(int i = 0; i < threads.size(); i++){
		cout<<threads[i].get_id()<<endl;
		threads[i].join();
	}
	return 0;
}
