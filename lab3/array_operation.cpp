/**
*/

#include<iostream>

//Checking if middle int is local min by comparing it to left and right side.
bool localMin(int leftSide, int middle, int rightSide) {
	if(middle < leftSide && middle < rightSide) {
		return true;
	}
	return false;
}

//Checking if middle int is local max by comparing it to left and right side..
bool localMax(int leftSide, int middle, int rightSide) {
	if(middle > leftSide && middle > rightSide) {
		return true;
	}
	return false;
}

/**
* This function is used to print local min or maxes to a console.
* It uses the functions above to check if it's either a min or max.
* If either returns true, it prints the index to the console.
* Once done, it adds a new line.
*/
void localMinMax(int arr[], short size) {
	short i;
	for(i = 1; i < size - 1; i++) {
		if(localMax(arr[i - 1], arr[i], arr[i+1]) || localMin(arr[i-1], arr[i], arr[i+1])) {
			std::cout << i << " ";
		}
	}
	std::cout << "\n";
}

int main(int argc, char** argv) {
	int arr[20];
	short i = 0;
	int var;
	//bool "done" is used to stop the loop and the if-statement inside checks that the value given is a real value
	//If not, it sets done to true, the loop also stops at 20, the max capacity of the array.
	bool done = false;
	//Printing program info to the console.
	std::cout << "Please input an integer between -2,147,483,648 and 2,147,483,647.\nPlease enter a \"done\" space when finished.\nMax array size = 20\n";
	while(!done) {
		//Prompting the user
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
	//Now printing the local min and max in array with a void function.
	std::cout << "Indexes of local min and max: ";
	localMinMax(arr, i);

	return 0;
}
