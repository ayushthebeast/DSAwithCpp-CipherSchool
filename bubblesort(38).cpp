#include<iostream>
using namespace std;
int main(){
	int a[10];
	int i,j;
	
	for(i=0;i<10;i++){
		cin>>a[i];
		
	}
	
	for(j=0;j<9;j++){
		int temp;
		for(i=0;i<10-j;i++){
			if(a[i+1]<a[i]){
			
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		}
		
		
	}
	cout<<"after bubble sort ";
	for(i=0;i<10;i++){
		
		cout<<a[i]<<" ";
	}
}
