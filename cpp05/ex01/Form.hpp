#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
    std::string name;
    bool isSign;
    int gradeToSign;
    int gradeToExecute;

public:
    class GradeTooHighException : public std::runtime_error {
    public: GradeTooHighException(const std::string &error) : std::runtime_error (error) {
    };
    };

    class GradeTooLowException : public std::runtime_error {
    public: GradeTooLowException(const std::string &error) : std::runtime_error (error) {
    };
    };
    Form();
    Form(std::string name, int grade_to_sign, int grade_to_execute );
    ~Form();
    Form(const Form &form);
    Form &operator=(const Form form);
    void beSigned(Bureaucrat &bureaucrat);
    int getGradeToSign() const;
    int getGradeToExecute() const;
    std::string getName() const;
    std::string getSigned() const;
};

std::ostream &operator<< (std::ostream &os, const Form &form);
