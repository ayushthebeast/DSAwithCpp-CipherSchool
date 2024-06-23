#include<iostream>
#include<vector>
using namespace std;

int main(){
	int *arr;
	arr=new int[5];
	delete arr;
	
	vector<int> a;
	cout<<"the size of a is: "<<a.size()<<endl;
	int i;
	for(i=0;i<5;i++){
		a.push_back(i+1);
	}
	
	cout<<"the size of a is: "<<a.size()<<endl;
	a.pop_back();
	cout<<"the size of a is: "<<a.size()<<endl;
	
	for(auto j=a.begin();j<a.end();j++){
		cout<<*j;
	}
	cout<<"the capacity of a is: "<<a.capacity()<<endl;
	
}



