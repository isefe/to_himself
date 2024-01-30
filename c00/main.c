#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z' )
	{
		write(1, &i, 1 );
		i++;
	}
}

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 'z';
	while(i >= 'a' )
	{
		write(1, &i, 1);
		i--;
	}
}

void	ft_print_numbers(void)
{
	char i;
	
	i = '0';
	while (i <= '9' )
	{
		write(1, &i, 1);
		i++;
	}	
}

void	ft_is_negative(int n)
{
	if(n < 0 )
		write(1, &("N"), 1);
	else
		write(1, &("P"), 1);
}

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

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	
	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(48 + a / 10);
			ft_putchar(48 + a % 10);
			ft_putchar(' ');
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			if (! (a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}



void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*t = '0';
	i = 0;
	while (++i < n)
		t[i] = t[i - 1] + 1;
	t[n] = ',';
	t[n + 1] = ' ';
	while (*t <= 58 - n)
	{
		write(1, t, n + ((*t != 58 - n) ? 2 : 0));
		i = n;
		while (i--)
			if (++t[i] <= 58 - n + i)
				break ;
		while (++i > 0 && i < n)
			t[i] = t[i - 1] + 1;
	}
}

int main()
{
    //ft_putchar('z');
   
    //ft_print_alphabet();
   
    //ft_print_reverse_alphabet();
    
    //ft_print_numbers();
    
    //ft_is_negative(313132);
    
    //ft_print_comb();
    
    //ft_print_comb2();
    
    //ft_putnbr(56);
    
    //ft_print_combn(3);
   
    return 0;
}
