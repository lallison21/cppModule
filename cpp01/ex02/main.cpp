#include <iostream>

int main() {

	std::string string = "HI THIS IS BRAIN";
	std::string &stringREF = string;
	std::string *stringPTR = &string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "value string: " << string << std::endl;
	std::cout << "value stringREF: " << stringREF << std::endl;
	std::cout << "value stringPTR: " << *stringPTR << std::endl;
}