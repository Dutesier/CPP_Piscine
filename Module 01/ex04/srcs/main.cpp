#include <iostream>
#include <fstream>

static int error_message(std::string err){
	std::cout << "Error: " << err << std::endl;
	return (1);
}

static std::string ft_replace(std::string str, std::string find, std::string replace) {
	size_t next;

	next = str.find(find);
	while (next != str.length())
	{
		if (next == std::string::npos)
			break ;
		str.erase(next, find.length());
		str.insert(next, replace);	
		next = str.find(find);
	}
	return (str);
}

int main(int argc, char *argv[]) {
	std::string holder;
	std::string rep = ".replace";

	if (argc != 4)
		return error_message("Usage: ./replace [filename] [find] [replace]");
	std::ifstream fileGiven(argv[1]);
	if (!fileGiven)
		return error_message("Could not open file for reading");
	std::ofstream fileOutputted(argv[1] + rep);
	if (!fileOutputted)
	{
		fileGiven.close();
		return error_message("Could not open file for writing");
	}
	while (std::getline(fileGiven, holder)){
		if (fileGiven.good())
			holder = holder + "\n";	
		fileOutputted << ft_replace(holder, argv[2], argv[3]);
	}
	fileGiven.close();
	fileOutputted.close();
}