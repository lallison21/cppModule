#pragma once

# include <iostream>
# include <string>
# include <exception>

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
