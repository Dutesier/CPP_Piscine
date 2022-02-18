#include "ex01.h"

Contact::Contact() {
}

Contact::Contact(int x)
{
	if (x)
		SetFirstName();
	SetLastName();
	SetNickname();
	SetPhonenumber();
	SetSecret();
}

void Contact::GetInfo() {

	std::cout << "| " << "    " << index << "    ";
	std::cout << " | ";
	format_str(firstName); 
	std::cout << " | ";
	format_str(lastName);
	std::cout << " | ";
	format_str(nickname);
	std::cout << " | "<< std::endl;
}

void Contact::GetFullInfo()
{
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phonenumber << std::endl;
	std::cout << darkestSecret << std::endl;
}

void Contact::format_str(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0,9) << '.';
	else
		std::cout << std::setw(10) << str;
}

void Contact::SetFirstName()
{
	std::cout << "Enter First Name:" << std::endl;
	std::cin >> firstName;
}

void Contact::SetLastName()
{
	std::cout << "Enter Last Name:" << std::endl;
	std::cin >> lastName;
}

void Contact::SetNickname()
{
	std::cout << "Enter Nickname:" << std::endl;
	std::cin >> nickname;
}

void Contact::SetPhonenumber()
{
	std::cout << "Enter Phonenumber:" << std::endl;
	std::cin >> phonenumber;
}

void Contact::SetSecret()
{
	std::cout << "Enter their Darkest Secret:" << std::endl;
	std::cin >> darkestSecret;
}

void Contact::SetIndex(int y)
{
	index = y;
}

Contact::~Contact() {
	/*
	firstName.clear();
	lastName.clear();
	nickname.clear();
	phonenumber.clear();
	darkestSecret.clear();*/
}
