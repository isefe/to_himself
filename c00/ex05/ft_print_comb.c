#include <unistd.h>

void	ft_print_comb(void)
{
	char i;
	char j;
	char l;

	i = '0';
	while (i < '8' )
	{	
		j = i + 1;
		while (j < '9' )
		{
			l = j + 1;
			while (l <= '9' )
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &l, 1);
				if (! ((i == '7') && (j == '8') && (l == '9')))
					write(1, ", ", 2);
				l++;
			}
			j++;
		}
		i++;
	}
}
