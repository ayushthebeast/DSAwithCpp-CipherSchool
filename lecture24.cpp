#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int c;
	c=*x;
	*x=*y;
	*y=c;
	cout<<"swapping completed"<<endl;
}

int main(){
	int a=4;
	int b=3;
	
	swap(&a,&b);
	
	cout<<"value after swapping a:"<<a<<" b:"<<b<<endl;
}
