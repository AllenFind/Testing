#include<thread>
#include<iostream>
#include<string>
#include<vector>
#include<mutex>

using namespace std;

struct Sum{
	int sum = 0;
	mutex mu;
	void incre(){
		mu.lock();
		sum++;
		mu.unlock();
	}
};


void func(Sum&s)
{
	s.incre();
}

int main(){
		vector<thread> threads;
		Sum s;
		for(int i =0; i<10000; i++){
			threads.push_back(thread(func,ref(s)));
		}
		for(int i=0;i<threads.size(); i++){
			threads[i].join();
		}
		cout<<s.sum<<endl;
		return 0;
}
