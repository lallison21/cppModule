#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <iomanip>

using namespace std;

class Contact {

private:
	string	firstName;
	string	lastName;
	string	nickname;
	string	phoneNumber;
	string	darkestSecret;

public:
	Contact();
	Contact(string firstName,
				string lastName,
				string nickname,
				string phoneNumber,
				string darkestSecret);

	void		setData();
	bool		isEmpty();

	void		setFirstName(string firstName);
	void		setLastName(string lastName);
	void		setNickname(string nickname);
	void		setPhoneNumber(string phoneNumber);
	void		darkestSecret(string darkestSecret);

	string	setFirstName const;
	string	setLastName const;
	string	setNickname const;
	string	setPhoneNumber const;
	string	darkestSecret const;

	~Contact();
};


#endif
