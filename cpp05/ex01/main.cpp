#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    try
    {
        Bureaucrat bureaucrat = Bureaucrat();
        Bureaucrat bureaucrat1 = Bureaucrat("Bob", 20);
        Bureaucrat bad = Bureaucrat("Halk", 0);
    }
    catch (std::exception &e) {
        std::cout <<"Error: "  << e.what() << "\n";
    }
    try{
        Bureaucrat newBur = Bureaucrat("BBB", 155);
    } catch (std::exception &e) {
        std::cout <<"Error: "  << e.what() << "\n";
    }
    try {
        Bureaucrat tom = Bureaucrat("Tom", 30);
        Form form = Form("Form", 35, 34);
        std::cout << form;
        Bureaucrat lesha = Bureaucrat("Lesha", 149);
        tom.signForm(form);
        Form form1 = Form("Form1", 35, 34);
        lesha.signForm(form1);
    }catch (std::exception &e) {
        std::cout <<"Error: "  << e.what() << "\n";
    }
    return (0);
}
