#ifndef CONTACT_H
#	define CONTACT_H

class Contact {
public:
	Contact();
	Contact(int x);
	void SetFirstName();
	void SetLastName();
	void SetNickname();
	void SetPhonenumber();
	void SetSecret();
	void SetIndex(int y);
	void GetInfo();
	void GetFullInfo();
	virtual ~Contact();
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phonenumber;
	std::string darkestSecret;
	int			index;
	void		format_str(std::string str);
};

#endif
