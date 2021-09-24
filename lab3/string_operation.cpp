/**
* Authur: Anthony Lahna
* CSE278 SectionB
*
* Description: This programs contains functions that allow the programmer to manipulate
*		strings and get information about them such as, letter count, digit count,
*		and numbers count. You can also change uppercase to lowercase and vice versa.
*		I use unsigned short a lot as there shouldn't be negative numbers anywhere
*		and it's the smallest possible byte allowed outside of char. Just saves a lot of
*		memory in the system.
*/

#include<iostream>
#include<string>

/**
* isLetter() is a function that checks if a given char is
* a letter in the alphabet by checking the lowercase ascii
* and the uppercase ascii. Returns a boolean to the user to
* know if it's true or false.
* Parameter char& c is a refrence to the char. Helps save memory
* by not making new chars in memory and just refrencing exsiting ones.
*/
bool isLetter(char& c) {
	//Straight forward if statment
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return true;
	} else {
		return false;
	}
}

/**
* This function takes in a string refrence and changes each
* letter to lowercase or uppercase by adding/subbing the ascii value of
* ('a' - 'A'). Doesn't need to return anything since it's
* passed by refrence. Uses bool to tell the program which to do for each char.
* If upperCase == true, changes lowercase letters to uppercase, else if,
* changes the uppercase letters to lowercase. Used with countLetter from PART
* A to help change case values.
* Using refrence in parameters to save space in memory and directly change ascii
* values without returning a new string.
*/
void changeCase(std::string& s, bool upperCase) {
	unsigned short i;
	for(i = 0; i < s.size(); i++) {
		if((s[i] >= 'a' && s[i] <= 'z') && (upperCase)) {
			s[i] -= ('a' - 'A');
		} else if ((s[i] >= 'A' && s[i] <= 'Z') && (!upperCase)) {
			s[i] += ('a' - 'A');
		}
	}
}

/**
* This method returns a pointer to an unsigned short.
* By returning a pointer to a varible, the system is able to keep the value
* in memoery when returning to the main function. I also use a string refrence
* to save space and so I can change the case of the orginal string.
* This function first changes the string to all lower or uppercase,
* depending on parameter upperCase, which is then used in the changeCase
* function above. Then, it loops through the string using 'i' and counts
* the number of letters using the isLetter(function). If true, add one.
* Once done, returns a point p to refrence of count in memory.
* PART A (And PART E with bool upperCase)
*/
unsigned short* letterCount(std::string& str, bool upperCase) {
	//Index and count varible.
	unsigned short i;
	unsigned short count = 0;
	changeCase(str, upperCase);
	for(i = 0; i < str.size(); i++) {
		char c = str[i];
		if(isLetter(str[i]))  {
			count++;
		}
	}
	//Making a point to hold memory location of count
	//Then return p, I convert them back into real number in
	//The main function using the "*" char.
	unsigned short* p = &count;
	return p;
}

/**
* This method checks if a given char is a digit by comparing
* the ascii values of 0 to 9. return a boolean.
*/
bool isDigit(char& c) {
	if((c >= '0') && (c <= '9')) {
		return true;
	} else {
		return false;
	}
}

/**
* This method returns a pointer to an unsigned short. I wanted to make sure
* it would return the correct value as this function did not function well
* without a pointer to keep a hold of the varible. This function uses the helper
* method "isDigit(char)" to check if a given char is a digit. By looping thorugh
* each char in the string, it's able to count and return the number of digits.
* PART B
*/
unsigned short* digitCount(std::string& str) {
	unsigned short i;
	unsigned short digitCount = 0;
	//Looping through to find digits.
	for(i = 0; i < str.size(); i++) {
		if(isDigit(str[i])) {
			digitCount++;
		}
	}
	//Returning a point with a refrence to the varible "digitCOunt".
	unsigned short* p = &digitCount;
	return p;
}

/**
* Counting the number of numbers. Basically, looping through the
* string until I hit a digit, when I do, i keep looping through,
* incrimenting 'i' until i hit a regular character again. Only
* add one to numCount when you find the first digit and then loop
* through the rest of the digits until you find a refular char again.
* PART C
*/
unsigned short* numberCount(std::string& str) {
	unsigned short i;
	unsigned short nums = 0;
	for(i = 0; i < str.size(); i++) {
		if(isDigit(str[i])) {
			nums++;
			while(isDigit(str[++i]));
		}
	}
	//Making a point to hold memory location of count
	//Then return p, I convert them back into real number in
	//The main function using the "*" char.
	unsigned short* p = &nums;
	return p;
}

/**
* This function just check's if "miami" is in the string. 
* First changes the values to all lower case using the changeCase()
* function and then loops through the string looking for a direct match
* of the string.
* PART D
*/
bool containsMiami(std::string str) {
	unsigned short i;
	changeCase(str, false);
	std::string s = "miami";
	if(str.size() > 4) {
		for(i = 0; i < str.size() - 4; i++) {
			//Most direct way of comparing string but it works.
			if(str[i] == s[0] && str[i+1] == s[1] && str[i+2] == s[2] && str[i+3] == s[3] && str[i+4] == s[4]) {
				return true;
			}
		}
	}
	return false;
}

/**
* Sums the number of digits with the number of letters and returns.
* Takes in a string s and passes it to the two function, then adds those
* number to sum, once done, creates a pointer and returns.
* PART F
*/
unsigned short* sumDigitsLetters(std::string& s) {
	unsigned short sum = 0;
	sum += *letterCount(s, false);
	sum += *digitCount(s);
	unsigned short* p = &sum;
	return p;
}

int main(int argc, char** argv) {
	std::cout << "Please input string here: ";
	std::string str1;
	std::getline(std::cin, str1);
	//I used * to save the value of the returned pointer in varibles
	unsigned short letters = *letterCount(str1, false);
	unsigned short digits = *digitCount(str1);
	unsigned short nums = *numberCount(str1);
	std::cout << "String: " << str1 << "\n";
	std::cout << "Number of letters in str1: " << letters << "\n";
	std::cout << "Number of digits in string: " << digits << "\n";
	std::cout << "Numbers count: " << nums << "\n";
	std::cout << "Contains \"miami\": " << containsMiami(str1) << "\n";
	unsigned short sum = *sumDigitsLetters(str1);
	std::cout << "Sum of letters and digits: " << sum << "\n";
	return 0;
}
