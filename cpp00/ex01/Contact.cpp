#include "Contact.hpp"

Contact::Contact(string firstName,
				 string lastName,
				 string nickname,
				 string phoneNumber,
				 string darkestSecret) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::Contact() {
	Contact("", "", "", "", "");
}

Contact::~Contact() {
}

std::string		Contact::getFirstName() const {
	return this->firstName;
}

std::string		Contact::getLastName() const {
	return this->lastName;
}

std::string		Contact::getNickname() const {
	return this->nickname;
}

std::string		Contact::getPhoneNumber() const {
	return this->phoneNumber;
}

std::string		Contact::getDarkestSecret() const {
	return this->darkestSecret;
}

void	Contact::setFirstName(string firstName) {
	this->firstName = firstName;
}

void	Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

void	Contact::setNickname(string nickname) {
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

void	Contact::setData() {

	string	word;

	cout << "Please Enter firstName:" << endl;
	getline(cin, word);
	this->setFirstName(word);

	cout << "Please Enter lastName:" << endl;
	getline(cin, word);
	this->setLastName(word);

	cout << "Please Enter nickname:" << endl;
	getline(cin, word);
	this->setNickname(word);

	cout << "Please Enter phoneNumber:" << endl;
	getline(cin, word);
	this->setPhoneNumber(word);

	cout << "Please Enter darkestSecret:" << endl;
	getline(cin, word);
	this->setDarkestSecret(word);

	cout << "Thank you, new contact is created!" << endl;
}

bool	Contact::isEmpty() {

	if (this->getFirstName().empty()) {
		return true;
	}

	if (this->getLastName().empty()) {
		return true;
	}

	if (this->getNickname().empty()) {
		return true;
	}

	if (this->getPhoneNumber().empty()) {
		return true;
	}

	if (this->getDarkestSecret().empty()) {
		return true;
	}

	return false;
}
