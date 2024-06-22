#include<iostream>
using namespace std;

class vehichle{
	public:
		int number_tyres;
		string name;
		int capacity;
		int mileage;
		
		void calculatemileage(){
			cout<<"the mileage is: "<<mileage<<endl;
			
		}
};

class schoolbus : public vehichle{
	string school_name;
	int number_holiday;
	
	public:
		 
		 void printschoolname(){
		 	cout<<"the school name is: "<<school_name<<endl;
		 }
};

class car: public vehichle{
	private:
		
		int number_airbags;
		int ac_consumption;
		
		
};

int main(){
	car a;
	a.mileage=50;
	a.calculatemileage();
	
}
