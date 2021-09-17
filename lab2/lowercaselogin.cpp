/**
* Anthony Lahna
* CSE 278 Section B
* Q2 Part B
*
* Part b of this question has the same functionality, asking the user for login, except, the user can input the
* the username with lowercase  or uppercase letters and the prgogram will account for it by setting all
* of the chars in their string to lowercase.
*/

#include<iostream>
#include<string>
#include<ctype.h>

int main(int argc, char** argv) {
	//Setting up varibles and making varibles that we will use to compare
	std::string username = "21_cse_c++_fall";
	std::string password = "278A&B";
	std::string user_input = "";
	std::string pass_input = "";

	//Prompting the user
	std::cout << "Please enter the username: ";
	std::cin >> user_input;
	std::cout << "Please enter the password: ";
	std::cin >> pass_input;

	//Making a new string and filling it with the lowercase chars of "user_input"
	std::string new_user_input = "";
	int i;
	for(i = 0; i < user_input.length(); i++) {
		new_user_input += tolower(user_input.at(i));
	}

	//Comparing if the string's are equal.
	if((username == new_user_input) && (password == pass_input)) {
		std::cout << "Login sucessful!\n";
	} else {
		std::cout << "Login attempt failed.\n";
	}

	return 0;

}
