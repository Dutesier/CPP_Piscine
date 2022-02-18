#include "ex01.h"

int main()
{
	int loop;
	Phonebook phonebook(8);
	std::string input;

	loop = 1;
	while (loop)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT):" << std::endl;
		std::cin >> input;
		if (!std::strcmp(input.c_str(), "EXIT"))
		{
			loop = 0;
			break ;
		}
		else if (!strcmp(input.c_str(), "ADD"))
		{
			phonebook.AddContact(Contact(1));
		}
		else if (!strcmp(input.c_str(), "SEARCH"))
		{
			phonebook.ListContacts();
		}
		else
			std::cout << "type something understandable you baffoon" << std::endl;
	}
	return (0);
}
