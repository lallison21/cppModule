#pragma once

# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
    std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
    RobotomyRequestForm &operator=(const RobotomyRequestForm robotomyRequestForm);
    void execute(Bureaucrat const &executor) const ;
};
