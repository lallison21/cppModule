#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
    std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5),
target(target) {
    std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm) : Form
("PresidentialPardonForm", 25, 5), target(presidentialPardonForm.target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm presidentialPardonForm) {
    this->target = presidentialPardonForm.target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (this->getSigned().size() == 2) {
        throw NotSignException("The form is not signed\n");
    } else if (executor.getGrade() <= this->getGradeToExecute()) {
        std::cout << "drilling noises... ";
        std::srand(time(0));
        if (std::rand() % 2 == 0) {
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        } else {
            std::cout << "The robotomy failed." << std::endl;
        }
    } else {
        throw GradeTooLowException("The grade is too low for execute\n");
    }
}
