#include<iostream>
using namespace std;

int sum(int a,int b){
	int c=a+b;
//	return d;

	cout<<"c is"<<c<<endl;
	return c;
}
int main(){
	int a=5;
	int b=7;
	int c=75;
	int d=sum(a,b);
	cout<<"sum is"<<d<<endl;
	cout<<"main c is"<<c;
	
}
