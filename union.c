#include <unistd.h>

int	ft_check(char *str, int i, char c)
{
	while (--i >= 0)
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

int	main (int ac, char **av)
{
	int i = 0;
	int in = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_check(av[1], i, av[1][i]) == 0)
				write (1, &av[1][i], 1);
			i++;
		}
		while (av[2][in])
		{
			if (ft_check(av[1], i, av[2][in]) == 0 && ft_check(av[2], in, av[2][in]) == 0)
				write (1, &av[2][in], 1);
			in++;
		}
	}
	write(1, "\n", 1);
}