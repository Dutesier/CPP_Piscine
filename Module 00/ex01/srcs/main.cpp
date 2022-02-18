#include <iostream>
#include <string>

int main()
{
	int loop;
	std::string input;

	loop = 1;
	while (loop)
	{
		std::cin >> input;
		if (input[0] == 'q')
			loop = 0;
		std::cout << input;
	}
	return (0);
}
