#include<iostream>
using namespace std;

class New_account{
	public:
	int amount;
	int days;
	
	New_account(int amount,int days){
		this->amount=amount;
		this->days=days;
		cout<<"the constructer is called now"<<endl;
	}
	~New_account(){
		cout<<"now the use of the object is complete and the object is getting destroyed.";
	}
};

int main(){
	int amount=0;
	int days=0;
	New_account a(amount,days);
	cout<<"after this destructor will print"<<endl;
	
}
