#include<iostream>
using namespace std;
int sum(int a,int b);

int main(){
	int a=8;
	int b=5;
	
	int c=sum(a,b);
	cout<<c;
}

int sum(int a,int b){
	return a+b;
}
