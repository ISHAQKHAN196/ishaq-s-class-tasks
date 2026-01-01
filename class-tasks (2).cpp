#include <iostream>

using namespace std;

double calAreaCircle (double);

double PI = 3.14;

int main(){

	double radius = 0;
	double area = 0;

	cout<<"Enter the radius of Circle (cm): ";
	cin>>radius;

	area = calAreaCircle(radius);

	cout<<"Area of Circle = "<<area<<endl;
		
return 0;
}//end of the main


double calAreaCircle (double r)
{
	return PI * r * r;
}//end of the function calArea
