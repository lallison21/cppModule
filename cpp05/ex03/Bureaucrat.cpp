#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default bureaucrat constructor is called" << std::endl;
	this->name = "defaultName";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	std::cout << "Bureaucrat constructor from " << name << " is called" << std::endl;
	this->name = name;
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException("The grade is too high");
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException("The grade is too low");
	} else {
		this->grade = grade;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default bureaucrat destructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat bureaucrat) {
	this->name = bureaucrat.getName();
	this->grade = bureaucrat.getGrade();
	return *this;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

void Bureaucrat::increment() {
	if (this->grade > 1) {
		this->grade--;
	} else {
		throw Bureaucrat::GradeTooHighException("The grade is too high");
	}
}

void Bureaucrat::decrement() {
	if (this->grade < 150) {
		this->grade++;
	} else {
		throw Bureaucrat::GradeTooLowException("The grade is too low");
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	return os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what();
    }
}

void Bureaucrat::executeForm(const Form &form) {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " couldn't executed " << form.getName() << " because " << e.what();
    }
}
