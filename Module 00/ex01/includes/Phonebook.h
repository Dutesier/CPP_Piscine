#ifndef PHONEBOOK_H
#	define PHONEBOOK_H

#	include "Contact.h"
const int MAX_SIZE = 8;

class Phonebook {
public:
	Phonebook(int phonebookSize); //Constructor
	virtual ~Phonebook(); // Deconstructor
	int AddContact(Contact newContact);
	int ListContacts();
private:
	int numOfContacts;
	int maxSize;
	int listStart;
	Contact contacts[MAX_SIZE];
};

#endif
