#pragma once

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
    std::string target;

public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm shrubberyCreationForm);
    void execute(Bureaucrat const &executor) const ;
};
