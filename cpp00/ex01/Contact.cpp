#include "Contact.hpp"

Contact::Contact(std::string firstName,
				 std::string lastName,
				 std::string nickname,
				 std::string phoneNumber,
				 std::string darkestSecret) {

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

void	Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void	Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

void	Contact::setData() {

	std::string	word;

	std::cout << "Please Enter firstName:" << std::endl;
	getline(std::cin, word);
	this->setFirstName(word);

	std::cout << "Please Enter lastName:" << std::endl;
	getline(std::cin, word);
	this->setLastName(word);

	std::cout << "Please Enter nickname:" << std::endl;
	getline(std::cin, word);
	this->setNickname(word);

	std::cout << "Please Enter phoneNumber:" << std::endl;
	getline(std::cin, word);
	this->setPhoneNumber(word);

	std::cout << "Please Enter darkestSecret:" << std::endl;
	getline(std::cin, word);
	this->setDarkestSecret(word);

	std::cout << "Thank you, new contact is created!" << std::endl;
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
