#include<stdio.h>
#include<unistd.h>

void	essai(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7' || b <= '8' || c <= '9')
	{
		b = a + 1;
		c = b + 1;
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a < '7' && b <= '8' && c <= '9')
		{
			write (1, ", ", 2);
		}
		c++;
		b++;
		a++;	
	}
}