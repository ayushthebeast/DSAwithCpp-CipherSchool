#include<iostream>
using namespace std;

int sum(int a, int b){
	int c;
	c=a+b;
	return c;
}

int main(){
	int m=3;
	int p=6;
	int addition=sum(m,p);
	cout<<addition;
	return 0;
}
