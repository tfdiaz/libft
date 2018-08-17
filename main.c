#include "printf/ft_printf.h"
#include "libft.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
	char *line;

	if (argc == 2)
	{
		int fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &line))
				ft_putendl(line);
	}
	ft_printf("Can you read me\n");
	ft_printf("%i\n", 5);
	ft_printf("Happy Birthday Tomas\n");
}

