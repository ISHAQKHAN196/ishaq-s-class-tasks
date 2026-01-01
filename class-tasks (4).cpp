#include <iostream>

using namespace std;

double calAreaCircle (double);
double calAreaRectangle(double, double);

double PI = 3.14;

int main(){

	double radius = 0;
	double length = 0;
	double width = 0;
	double area = 0;
	int choice =0;

	cout<<"Press 1 for Area of Rectangle"<<endl;
	cout<<"Press 2 for Area of Circle"<<endl;
	cin>>choice;

	switch(choice)
	{
	case 1:
		cout<<"Enter the length of the rectangle (cm): ";
		cin>>length;

		cout<<"Enter the width of the rectangle (cm): ";
		cin>>width;

		area = calAreaRectangle(length, width);

		cout<<"Area of Rectangle = "<<area<<endl;
		break;
	case 2:
		cout<<"Enter the radius of Circle (cm): ";
		cin>>radius;

		area = calAreaCircle(radius);

		cout<<"Area of Circle = "<<area<<endl;
	}//End of switch
return 0;
}//end of the main

double calAreaRectangle (double l, double w)
{
	return l*w;

}//end of the function calArea

double calAreaCircle (double r)
{
	return PI * r * r;
}//end of the function calArea
