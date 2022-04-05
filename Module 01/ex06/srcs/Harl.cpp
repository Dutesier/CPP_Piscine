#include "Harl.hpp"

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;;
}


void Harl::complain(std::string level) {
	std::string types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*complaint[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int i;
	for (i = 0; i < 4; i++) {
		if (types[i] == level)
			break ;
	}

	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	while (i < 4) {
		switch (i) {
			case 0:
				std::cout << "[ " << types[0] << " ] " << std::endl;
				(this->*complaint[0])();
				break ;
			case 1:
				std::cout << "[ " << types[1] << " ] " << std::endl;
				(this->*complaint[1])();
				break ;
			case 2:
				std::cout << "[ " << types[2] << " ] " << std::endl;
				(this->*complaint[2])();
				break ;
			case 3:
				std::cout << "[ " << types[3] << " ] " << std::endl;
				(this->*complaint[3])();
				break ;
		}
		std::cout << std::endl;
		i++;
	}



}
