#include "ex01.h"

Phonebook::Phonebook(int phonebookSize) {
	if (phonebookSize <= 0)
	{
		std::cout << "Phonebook size too small" << std::endl;
		return ;
	}
	this->maxSize = phonebookSize;
	this->listStart = 0;
	this->numOfContacts = 0;
}

int Phonebook::AddContact(Contact newContact)
{
	if (numOfContacts == MAX_SIZE)
	{
		contacts[listStart] = newContact;
		listStart++;
		if (listStart == MAX_SIZE)
			listStart = 0;
	}
	else
	{
		contacts[numOfContacts] = newContact;
		numOfContacts = numOfContacts + 1;
	}
	return (0);
}

int	Phonebook::ListContacts()
{
	int saveStart;
	int rest;
	int	i;

	saveStart = listStart;
	rest = 0;
	i = 0;
	std::cout << "*** Phonebook ***" << std::endl;
	std::cout << "|   Index   |    First   |    Last    |    Nick    |" << std::endl;
	while (saveStart < numOfContacts)
	{
		contacts[saveStart].SetIndex(i++);
		contacts[saveStart].GetInfo();
		saveStart++;
	}
	while (listStart > rest)
	{
		contacts[rest].SetIndex(i++);
		contacts[rest].GetInfo();
		rest++;
	}
	std::string input;
	
	int inputIdx = MAX_SIZE + 1;
	while (inputIdx > MAX_SIZE - 1 || inputIdx < 0)
	{
		std::cout << "Select an index (0-7):" << std::endl;
		std::cin >> input;
		try
		{
			inputIdx = std::stoi(input.c_str());
		}
		catch(std::exception &err)
		{
			inputIdx = -1;
			std::cout << "Something valid pls..." << std::endl;
			std::cin >> input;
		}
	}
	
	inputIdx = (inputIdx + listStart) % MAX_SIZE;
	contacts[inputIdx].GetFullInfo();
	return (0);
}

Phonebook::~Phonebook() {
	/*int i;

	i = 0;
	if (numOfContacts > 0)
	{
		while (i < 8)
		{
			contacts[i].destroy();
			i++;
		}
	}*/
}
