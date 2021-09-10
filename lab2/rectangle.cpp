//

#include<iostream>
#include<iomanip>

int main(int argc, char** argv) {
	int width = 0;
	int height = 0;
	std::cout << "Please input the width of the rectangle: ";
	std::cin >> width;
	std::cout << "Please input the height of the rectange: ";
	std::cin >> height;

	float area = (float) (width * height);
	std::cout << "The area of this rectangle is : " << std::fixed << std::setprecision(2) << area << "\n";
} 
