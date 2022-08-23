#pragma once

# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
    PresidentialPardonForm &operator=(const PresidentialPardonForm presidentialPardonForm);
    void execute(Bureaucrat const &executor) const ;
};
