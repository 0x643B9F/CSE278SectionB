/**
* Anthony Lahna
* CSE 278 Section B
* Q1 Part B
*
* This program prompts the user for the radius of a circle and then finds perminter and area.
* Then it prints the results to the console.
*/

#include<iostream>
#include<iomanip>

int main(int argc, char** argv) {
	//Prompting user for the radius.
	//Unsigned because radius should not be negative.
	unsigned int radius = 0;
	std::cout << "Please input the radius of the circle: ";
	std::cin >> radius;

	//Setting pi as a constant varible and then using it with radius to find perimiter and area of the circle.
	const float PI = 3.14159;
	float perimeter = 2 * radius * PI;
	float area = (float) (radius * radius * PI);
	//Printing result to the console.
	std::cout << "The perimeter of this circle is: " << std::fixed << std::setprecision(2) << perimeter << "\n";
	std::cout << "The area of this circle is: " << std::fixed << std::setprecision(2) << area << "\n";
	return 0;
} 
