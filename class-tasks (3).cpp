#include <iostream>
using namespace std;
double sum(double board[][4], int n); //Function Prototype
int main() {
	double board[3][4] = {
		{ 1.0,2.0,3.0,4.0 },
		{ 5.0,6.0,7.0,8.0 },
		{ 9.0,10.0, 11.0, 12.0 }
	};
	cout << endl
		<< "sum = " << sum(board, 3)	//sizeof board / sizeof board[0])
		<< endl;
return 0;
}//end of the main
 //Function to attempt to modify an argument and return num
double sum(double array[][4], int count)
{
	double sum = 0.0;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += array[i][j];
		}
	}//end outer for
return sum;
}//end of changenum Function