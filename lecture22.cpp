#include<iostream>
using namespace std;
int main(){
	int a;
	a=5;
	int *p;
	p=&a;
	cout<<"the value of a from actual variable "<<a<<endl;
	cout<<"the value of a from pointer "<<*p<<endl;
}
