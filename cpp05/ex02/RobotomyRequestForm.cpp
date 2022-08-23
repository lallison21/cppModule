#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
    std::cout << "RobotomyRequestForm constructor is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),
target(target) {
    std::cout << "RobotomyRequestForm constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) : Form
("RobotomyRequestForm", 72, 45), target(RobotomyRequestForm.target) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm robotomyRequestForm) {
    this->target = robotomyRequestForm.target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (this->getSigned().size() == 2) {
        throw NotSignException("The form is not signed\n");
    } else if (executor.getGrade() <= this->getGradeToExecute()) {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    } else {
        throw GradeTooLowException("The grade is too low for execute\n");
    }
}
