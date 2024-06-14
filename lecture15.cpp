#include<iostream>
using namespace std;
int compare(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
	
}
int main(){
	int a=6;
	int b=8;
	int c=compare(a,b);
	cout<<c;
}

