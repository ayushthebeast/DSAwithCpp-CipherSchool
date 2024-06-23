
#include <iostream>
using namespace std;
		
class Coordinate
{
	public:
		float a;
		float b;
		public:
			
			Coordinate operator+(Coordinate const & obj)
			{
				Coordinate z;
				z.a =this->a+ obj.a;
				z.b =this->b + obj.b;
				return z;
			}
			
			void sqdistancefromcoordinate(float c)
			{
				float dist;
				dist =(a-c)*(a-c)+(b-c)*(b-c);
					cout << dist;
			}
			void sqdistancefromcoordinate(float a, float b)
			{
				float dist;
				dist =(this->a-a)*(this->a-a)+(this->b-b)*(this->b-b);
					cout << dist;
					
				cout << "The third function is used";	
			}
			
};
		
int main()
{
	Coordinate x;
	x.a= 3;
	x.b= 4;
	x.sqdistancefromcoordinate(2);
	
	Coordinate y;
	y.a=5;
	y.b=6;
	
	Coordinate z;
	
//	z=x+y;
//	z=x-y;
//    cout << "The coordinate after addition are "<<z.a<<" "<<z.b;
	return 0;
}

