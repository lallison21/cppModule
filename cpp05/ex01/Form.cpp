#include "Form.hpp"

Form::Form() : name("Form"), isSign(false), gradeToSign(1), gradeToExecute(1) {
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSign(false) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooHighException("The grade is too high for signing\n");
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw GradeTooLowException("The grade is too low for signing\n");
    }
    this->gradeToSign = gradeToSign;
    this->gradeToExecute = gradeToExecute;
}

Form::~Form() {
    std::cout << "Default destructor is called" << std::endl;
}

Form::Form(const Form &form) : name(form.name), isSign(form.isSign), gradeToSign(form.gradeToSign),
gradeToExecute(form.gradeToExecute) {
}

Form &Form::operator=(const Form form) {
    this->name = form.name;
    this->isSign = form.isSign;
    this->gradeToSign = form.gradeToSign;
    this->gradeToExecute = form.gradeToExecute;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    return os << "Form name: " << form.getName() << "\nMin grade to sign: " << form.getGradeToSign()
        << "\nMin grade to execute: " << form.getGradeToExecute() << std::endl;
}

int Form::getGradeToSign() const {
    return this->gradeToSign;
}

int Form::getGradeToExecute() const {
    return this->gradeToExecute;
}

std::string Form::getName() const {
    return this->name;
}

std::string Form::getSigned() const {
    if (this->isSign)
        return "Yes";
    return "No";
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->gradeToSign > bureaucrat.getGrade()) {
        this->isSign = true;
    } else {
        throw GradeTooLowException("The grade is too low for signing\n");
    }
}
