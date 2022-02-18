#ifndef PHONEBOOK_H
#	define PHONEBOOK_H

#	include "Contact.h"
#	ifndef MAX_SIZE
#		define MAX_SIZE 3
#	endif
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
