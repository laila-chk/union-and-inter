#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		int k;
		int check = 0;
		while (av[1][i])
		{
			while (av[2][j] && av[1][i])
			{
				check = 0;
				if (av[1][i] == av[2][j])
				{
					k = 0;
					while (k < i)
					{
						if (av[1][k] == av[1][i])
							check = 1;
						k++;
					}
					if (check == 0)
					{
						write(1, &av[1][i], 1);
						break;
					}
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
}
