#include<iostream>
using namespace std;

class Bank_client{
	
	private:
		int credit_number;
		int cvv;
		string password;
		
		
		public:
			string name;
			string user_name;
			
			
			void set_credit_card_number(int number){
				this->credit_number=number;
				cout<<"the address of object calling this is "<<this<<endl;
			}
			
			void get_credit_card_number(){
				cout<<"the credit number is "<<credit_number<<endl;
			}
			void ste_allthestuffatonce(int credit_number, string name, int password){
				this->credit_number=credit_number;
				this->name=name;
				this->password=password;

			}
			
};

int main(){
	
	Bank_client a,b,c;
	
	a.name= "ayush";
	a.user_name="ayush Keshari";
	
	a.set_credit_card_number(52162);
	a.get_credit_card_number();
	cout<<"the address of this object is "<<&a;
}
