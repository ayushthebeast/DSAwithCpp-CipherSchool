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
		 
		 void printname(){
		 	cout<<"halaluya"<<name<<endl;
		 }
};

class car: public vehichle{
	private:
		
		int number_airbags;
		int ac_consumption;
		
		public:
			void printname(){
				cout<<name<<endl;
			}
		
};

class Suv: public car{
	int four_wheel_drive;
};

int main(){
	car a;
	schoolbus b;
	
	a.name="suzuki";
	b.name="tata";
	
	a.printname();
	b.printname();
}
