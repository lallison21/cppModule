#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {
    std::cout << "Intern constructor is called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern destructor is called" << std::endl;
}

Intern::Intern(const Intern &intern) {
    *this = intern;
}

//Intern &Intern::operator=(const Intern intern) {
//    return *this;
//}

Form *Intern::ReternPresidentalForm(std::string target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::ReternRobotomyForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::ReternShrebberyForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
    if (formName.empty()) {
        std::cout << "Form name is empty" << std::endl;
        throw InternException("I can't crate an empty form\n");
    }
    int index = -1;
    std::string arr[3] = {"shrubbery", "robotomy", "presidential"};
    for (int i = 0; i < 3; i++) {
        size_t pos = formName.find(arr[i]);
        if (pos != std::string::npos) {
            index = i;
            break;
        }
    }

    Form *(Intern::*func[])(std::string target) = {&Intern::ReternShrebberyForm, &Intern::ReternRobotomyForm,
                                                   &Intern::ReternPresidentalForm};

    if (index != -1) {
        std::cout << "Intern creates " << formName << std::endl;
        return (this->*func[index])(formTarget);
    }
    throw InternException("Form not found\n");
}
