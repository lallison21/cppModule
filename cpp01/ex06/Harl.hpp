#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {

private:
	void debug();
	void info();
	void warning();
	void error();
	int getIndex(std::string level) const ;

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
