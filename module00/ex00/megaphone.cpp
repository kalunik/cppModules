#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int	i = 1, j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			while (av[i][j])
			{
				putchar(toupper(av[i][j]));
				j++;
			}
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
