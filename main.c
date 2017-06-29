#include <stdio.h>
#include "get_next_line.h"
int main()
{
	int     fd;
	char    *line;
	int     j;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("File error");
		return (0);
	}

	while ((j = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
	}
	
}
