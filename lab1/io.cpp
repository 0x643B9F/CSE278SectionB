#include <iostream>
#include <string>

int main (int argc, char** argv) {
	std::string s = "This is a demo to show special function of backslash.\062 with the slash now you can see.\n";
	// Std = standard directory
	std::cout << s;
	return 0;
}
