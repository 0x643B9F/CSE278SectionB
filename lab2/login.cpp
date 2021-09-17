/**
* Anthony Lahna
* CSE 278 Section B
* Q2 Part A
*
* This program asks the user for a username and password to login, if they username
* and password are correct, the console prints out "Login Sucessful", it they input
* the wrong user name or password, the console tells them their "login attempt failed".
*/

#include<iostream>
#include<string>

int main(int argc, char** argv) {
	//Setting up string varibles.
	std::string username = "21_CSE_c++_Fall";
	std::string password = "278A&B";
	std::string user_input = "";
	std::string pass_input = "";

	//Prompting the user for the login info.
	std::cout << "Please enter the username: ";
	std::cin >> user_input;
	std::cout << "Please enter the password: ";
	std::cin >> pass_input;

	//Checking if it's correct.
	if((username == user_input) && (password == pass_input)) {
		std::cout << "Login sucessful!\n";
	} else {
		std::cout << "Login attempt failed.\n";
	}
	return 0;

}
