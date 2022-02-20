#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = 0;
		int j = 0;
		int k;
		int check;
		while (av[1][i])
		{
			k = 0;
			check = 0;
			while (k < i)
			{
				if (av[1][k] == av[1][i])
					check = 1;
				k++;
			}
			if (check == 0)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][j])
		{
			k = 0;
			check = 0;
			i = 0;
			while (k < j)
			{
				if (av[2][j] == av[2][k])
					check = 1;
				k++;
			}
			while (av[1][i])
			{
				if (av[2][j] == av[1][i])
					check = 1;
				i++;
			}
			if (check == 0)
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
