/* Anthony Lahna 
* CSE 278 Section B
* lab2 Q3 part 2
*
* This program makes and int array of length 20 and asks the user to fill them with value ranging from 0 to 65535.
* I then uses a series of loops to ask for the data, and sort the array. Once the array is sorted, I find the max, min
* and the median and print it to the console.
 */
#include<string>
#include<iostream>

int main(int argc, char** argv) {
	//Creating the array and index varibles. "i" also acts as the size for the rest of the program.
	int arr[20];
	short i = 0;
	//I used an unsigned short to save space but also because the requirement only call for a max value of 65535.
	unsigned short var;
	//bool "done" is used to stop the loop and the if-statement inside checks that the value given is a real value
	//If not, it sets done to trur, the loop also stops at 20, the max capacity of the array
	bool done = false;
	//Printing program info to the console.
	std::cout << "Please input a positive interger between 0 and 65535.\nPlease enter a \"done\" space when finished.\nMax array size = 20\n";
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

	//Sorting the array from smallest to largest.
	short j;
	short k;
	unsigned short temp;
	short minValueIndex;
	for(j = 0; j < i - 1; j++) {
		minValueIndex = j;
		for(k = j + 1; k < i; k++) {
			if(arr[minValueIndex] > arr[k]) {
				minValueIndex = k;
			}
		}
		if(minValueIndex != j) {
			temp = arr[j];
			arr[j] = arr[minValueIndex];
			arr[minValueIndex] = temp;
		}
	}

	//Here I find max, min and median.
	unsigned short max = arr[i - 1];
	unsigned short min = arr[0];
	float median = 0.0;
	if(i % 2 == 0) {
		median = ((arr[(i/2)] + arr[((i/2)-1)])/2.0);
	} else {
		median = arr[(i/2)];
	}

	//Printint to the console.
	std::cout << "The size of the array is: " << i << "\n";
	std::cout << "The max value is: " << max << "\n";
	std::cout << "The min value is: " << min << "\n";
	std::cout << "The median is: " << median << "\n";

	return 0;
}
