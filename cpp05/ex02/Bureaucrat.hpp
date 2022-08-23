#pragma once

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {

private:
    std::string name;
    int grade;

public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &bureaucrat);
    Bureaucrat &operator=(const Bureaucrat bureaucrat);
    std::string getName() const ;
    int getGrade() const ;
    void increment();
    void decrement();
    void signForm(Form &form);
    void executeForm(Form const &form);

    class GradeTooHighException : public std::runtime_error {
    public: GradeTooHighException(const std::string &error) : std::runtime_error(error) {
    };
    };

    class GradeTooLowException : public std::runtime_error {
    public: GradeTooLowException(const std::string &error) : std::runtime_error(error) {
    };
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
