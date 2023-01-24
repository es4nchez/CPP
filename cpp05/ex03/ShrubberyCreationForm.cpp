#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("ShrubberyCreationForm", false, 145, 137), target(target) {std::cout << "shrub' creation" << std::endl;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &frm) {(*this) = frm;}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &frm) 
{
	if (this != &frm)
	{   
        this->sign = frm.sign;
        this->gradeToSign = frm.gradeToSign;
		this->gradeToExecute = frm.gradeToExecute;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::formAction() const
{
    std::ofstream   outfile;
    std::string     fileName;
    std::string     tree;

    fileName = target + "_shruberry";
    outfile.open(fileName);

    tree =  "    _\\/_\n";
    tree += "     /\\\n";
    tree += "     /\\\n";
    tree += "    /  \\\n";
    tree += "    /~~\\\n";
    tree += "   /o   \\\n";
    tree += "  /~~*~~~\\\n";
    tree += "  /    o \\\n";
    tree += " /~~~~~~~~\\\n";
    tree += "/__*_______\\\n";
    tree += "     ||\n";
    tree += "   \\====/\n";
    tree += "    \\__/\n";


    outfile << tree;
    outfile.close();
}