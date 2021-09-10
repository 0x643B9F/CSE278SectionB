//

#include<iostream>
#include<iomanip>

int main(int argc, char** argv) {
	int radius = 0;
	std::cout << "Please input the radius of the circle: ";
	std::cin >> radius;

	constexpr float PI = 3.14159;
	float perimeter = 2 * radius * PI;
	float area = (float) (radius * radius * PI);
	std::cout << "The perimeter of this circle is: " << std::fixed << std::setprecision(2) << perimeter << "\n";
	std::cout << "The area of this circle is: " << std::fixed << std::setprecision(2) << area << "\n";
} 
