#include "ShrubberyCreationForm.hpp"
#include "fstream"

#define ASCII_TREE \
"          &&& &&  & &&\n"\
"      && &\\/&\\|& ()|/ @, &&\n"\
"      &\\/(/&/&||/& /_/)_&/_&\n"\
"   &() &\\/&|()|/&\\/ '%' & ()\n"\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"\
"&&   && & &| &| /& & % ()& /&&\n"\
" ()&_---()&\\&\\|&&-&&--%---()~\n"\
"     &&     \\|||\n"\
"             |||\n"\
"             |||\n"\
"             |||\n"\
"       , -=-~  .-^- _\n"\
"		       `\n"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
    std::cout << "ShrubberyCreationForm constructor is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137),
target(target) {
    std::cout << "ShrubberyCreationForm constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) : Form
("ShrubberyCreationForm", 145, 137), target(ShrubberyCreationForm.target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm ShrubberyCreationForm) {
    this->target = ShrubberyCreationForm.target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (this->getSigned().size() == 2) {
        throw NotSignException("The form is not signed\n");
    } else if (executor.getGrade() <= this->getGradeToExecute()) {
        try {
            std::ofstream out(this->target + "_shrubbery");
            if (out.is_open()) {
                out << ASCII_TREE;
                std::cout << "The form is completed" << std::endl;
            } else {
                std::cout << "File not open" << std::endl;
            }
        } catch (std::exception &e) {
            std::cout << "File not open" << std::endl;
        }
    } else {
        throw GradeTooLowException("The grade is too low for execute\n");
    }
}
