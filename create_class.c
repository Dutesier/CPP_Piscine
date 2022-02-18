#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int src_file;
	int header_file;

	char	*src_name;
	char	*header_name;

	if (argc != 2 || argv[1][0] == '\0')
		return (printf("Usage: ./create_class <CLASS_NAME>\n"));

	char *all_upper = strdup(argv[1]);
	if (!all_upper)
		return (1);
	for (unsigned long i = 0; i < strlen(all_upper); i++)
		all_upper[i] = toupper(all_upper[i]);

	char *upper_first = strdup(all_upper);
	if (!upper_first)
	{
		free(all_upper);
		return (2);
	}
	for (unsigned long i = 1; i < strlen(upper_first); i++)
		upper_first[i] = tolower(upper_first[i]);

	src_name = malloc(sizeof(char) * (strlen(upper_first) + 4 + 1));
	if (!src_name)
	{
		free(all_upper);
		free(upper_first);
		return (3);
	}
	src_name = strcat(strcpy(src_name, upper_first), ".cpp");

	header_name = malloc(sizeof(char) * (strlen(upper_first) + 2 + 1));
	if (!header_name)
	{
		free(all_upper);
		free(upper_first);
		free(src_name);
		return (4);
	}
	header_name = strcat(strcpy(header_name, upper_first), ".h");

	src_file = open(src_name, O_CREAT | O_WRONLY, 0644);
	if (src_file < 0)
	{
		free(all_upper);
		free(upper_first);
		free(src_name);
		free(header_name);
		return (5);
	}
	header_file = open(header_name, O_CREAT | O_WRONLY, 0644);
	if (header_file < 0)
	{
		free(all_upper);
		free(upper_first);
		free(src_name);
		free(header_name);
		close(src_file);
		return (6);
	}


	dprintf(header_file, "#ifndef %s_H\n#\tdefine %s_H\n\nclass %s {\npublic:\n\t%s();\n\t%s(const %s& orig);\n\tvirtual ~%s();\nprivate:\n\t\n};\n\n#endif", all_upper, all_upper, upper_first, upper_first, upper_first, upper_first, upper_first);

	dprintf(src_file,"#include \"%s\"\n\n%s::%s() {\n}\n\n%s::%s(const %s& orig) {\n}\n\n%s::~%s() {\n}\n", header_name, upper_first, upper_first, upper_first, upper_first, upper_first, upper_first, upper_first);

	close(header_file);
	close(src_file);
	free(all_upper);
	free(upper_first);
	free(src_name);
	free(header_name);
	return (0);
}
