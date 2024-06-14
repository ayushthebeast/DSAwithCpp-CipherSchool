#include<iostream>
using namespace std;
int fun(int &a,int b){
	a=9999;
    b=9999;
	cout<<"the value of a and b inside the fun function"<<a<<" "<<b<<endl;
}

int main(){
	int a=5;
	int b=6;
	cout<<"the value of a and b before passing fun function"<<a<<" "<<b<<endl;
	fun(a,b);
	cout<<"the value of a and b after passing fun function"<<a<<" "<<b<<endl;

}
