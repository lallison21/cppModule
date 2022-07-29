#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:
	Contact contact[8];
	int number;

	void viewContacts() const;
	void numContacts() const;
	void viewFullInfo() const;

public:
	PhoneBook();

	void	addContact();
	void	getMain();
	void	searchContact() const;

	~PhoneBook();
};

#endif