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
				credit_number=number;
			}
			
			void get_credit_card_number(){
				cout<<"the credit number is "<<credit_number;
			}
			
			
};

int main(){
	
	Bank_client a,b,c;
	
	a.name= "ayush";
	a.user_name="ayush Keshari";
	
	a.set_credit_card_number(52162);
	a.get_credit_card_number();
}
