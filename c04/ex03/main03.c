#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char	*str);

int main(void)
{
	char	*str;

	str = "         ---++429495fgws7";
    printf("%d", ft_atoi(str));
}

