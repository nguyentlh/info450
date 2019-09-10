#include <iostream>
using namespace std; 

int main()
{
	int width = 5; 
	int length = 8; 
	int area; 
	int perimeter;

		//calculate area 
		area = width * length; 

		//calculate perimeter 
		perimeter = 2 * (width + length); 

	//print results 
		cout << "The area of the rectangle is " << area << "." << endl; 
		cout << "The perimeter of the rectangle is " << perimeter << "."<< endl;
		system("pause"); 


}