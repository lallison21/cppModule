#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2) {
}

Replace::~Replace() {
}

void Replace::checkS1(std::string &str) const {
	int i = str.find(s1);

	while (i != -1) {
		str.erase(i, s1.length());
		str.insert(i, s2);
		i = str.find(s1);
	}
}

void Replace::replace() const {

	std::ifstream streamIn;
	std::string outfile;
	std::ofstream streamOut;
	std::string str;

	if (this->filename.length() == 0 || this->s1.length() == 0 || this->s2.length() == 0) {
		std::cout << "Error: Incorrect argument" << std::endl;
		exit(EXIT_FAILURE);
	}

	streamIn.open(this->filename);
	if (!streamIn.is_open()) {
		std::cout << "Error: Incorrect file argument" << std::endl;
		streamIn.close();
		exit(EXIT_FAILURE);
	}

	streamIn.seekg(0, std::ios::end);
	if (streamIn.tellg() == 0) {
		std::cout << "Error: Empty file" << std::endl;
		streamIn.close();
		exit(EXIT_FAILURE);
	}

	streamIn.seekg(0, std::ios::beg);
	outfile = "res.replace";
	streamOut.open(outfile);
	if (!streamOut.is_open()) {
		std::cout << "Error: Output file is not created" << std::endl;
		streamIn.close();
		exit(EXIT_FAILURE);
	}

	while (std::getline(streamIn, str)) {
		checkS1(str);
		streamOut << str << "\n";
	}

	streamIn.close();
	streamOut.close();
}