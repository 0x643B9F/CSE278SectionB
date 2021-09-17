/**
* Anthony Lahna
* CSE 278 Section B
* Q1 Part A
*
* In this program, I prompt the user for the width and height of a rectangle, and then
* print the area of it to the console with 2 decimal points.
*/

#include<iostream>
#include<iomanip>

int main(int argc, char** argv) {
	//Setting up the  varibles and prompting the user to enter values for them.
	//Set to unsigned because the width or height should never be negative.
	unsigned int width = 0;
	unsigned int height = 0;
	std::cout << "Please input the (+)width of the rectangle: ";
	std::cin >> width;
	std::cout << "Please input the (+)height of the rectange: ";
	std::cin >> height;

	// Finding the are and printing it to the console
	float area = (float) (width * height);
	std::cout << "The area of this rectangle is : " << std::fixed << std::setprecision(2) << area << "\n";
	return 0;
} 

