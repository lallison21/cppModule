#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace {

private:
	std::string filename;
	std::string s1;
	std::string s2;
	void checkS1(std::string &str);

public:
	Replace(std::string filename, std::string s1, std::string s2);
	~Replace();
	void replace();
};

#endif
