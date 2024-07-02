#include<iostream>
using namespace std;
int main(){
	int a[10];
	int i;
	int j;
	
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	
	for(i=0;i<9;i++){
		int least_index=i;
		for(j=i;j<10;j++){
			if(a[j]<a[least_index]) least_index=j;
		}
		int temp;
		temp=a[i];
		a[i]=a[least_index];
		a[least_index]=temp;
	}
	
	cout<<"after selection sort "<<endl;
	for(i=0;i<10;i++){
		cout<<a[i];
	}
}
