/**
* Anthony Lahna
* CSE 278 Section B
* Q1 Part 1
*
* Filling and int array of size 20 with values prompt from the user. If the 
*/
#include<string>
#include<iostream>

int main(int argc, char** argv) {
	//Setting up all of the varibles used for the array.
	//"i" is used to keep track of index and size after loop is finished
	int arr[20];
	short i = 0;
	unsigned short var;
	bool done = false;
	//"done" is used to end the program but any value would work, except a number.
	//User is expected to keep track of values input, cannot exceed 65535.
	std::cout << "Please input a positive interger between 0 and 65535.\nPlease enter \"done\" space when finished.\nMax array size = 20\n";
	while(!done) {
		std::cout << "Enter Value Here: ";
		if(std::cin >> var) {
			arr[i] = var;
			i++;
		} else {
			done = true;
		}

		if( i == 20 ) {
			done = true;
		}
	}

	//Finding the max value of the array.
	short j;
	unsigned short max = 0;
	for(j = 0; j < i; j++) {
		if(arr[j] > max) {
			max = arr[j];
		}
	}

	//Find the min value in the array.
	short k;
	unsigned short min = 65535;
	for(k = 0; k < i; k++) {
		if(arr[k] < min) {
			min = arr[k];
		}
	}

	//Printing the result to the console for the user.
	std::cout << "The size of the array is: " << i << "\n";
	std::cout << "The max value is: " << max << "\n";
	std::cout << "The min value is: " << min << "\n";

	return 0;
}
