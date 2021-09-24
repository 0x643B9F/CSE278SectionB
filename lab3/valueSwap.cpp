/**
*/
#include<iostream>

/**
* Using refrences and points to swap two values. This function
* takes in two refrences, a and b. Now, you can swap the values of the
* refrences directly, or you can save the meory location to a points,
* p1 or p2 and used to "*" arible when calling p1 and p2 to swap the values.
* Just uncomment the code for the version you want to use and comment out the
* other version, or, use them together and see no change at all...
*/
void swap(int& a, int& b) {
	//Using refrences
	//int temp = a;
	//a = b;
	//b = temp;

	//Using pointers
	int* p1 = &a;
	int* p2 = &b;

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(int argc, char** argv) {
	int a = 10;
	int b = 2;
	std::cout << a << "," << b << "\n";

	//Using my function to swap two values.
	swap(a,b);

	std::cout << a << "," << b << "\n";
}
