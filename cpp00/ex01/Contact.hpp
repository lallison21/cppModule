#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <iomanip>

class Contact {

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	Contact();
	Contact(std::string firstName,
				std::string lastName,
				std::string nickname,
				std::string phoneNumber,
				std::string darkestSecret);

	void		setData();
	bool		isEmpty();

	void		setFirstName(std::string firstName);
	void		setLastName(std::string lastName);
	void		setNickname(std::string nickname);
	void		setPhoneNumber(std::string phoneNumber);
	void		setDarkestSecret(std::string darkestSecret);

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

	~Contact();
};


#endif
