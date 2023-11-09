
#include "libft.h"

int	nbr_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n > 10)
	{
		n = n / 10;
		count++;
	}
	printf("count: %d\n", count);
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	sign;
	size_t	length;
	char	*str;

	sign = 0;
	length = nbr_len(n);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	str = malloc(sizeof(char) * (length + 2));
	if (!str)
		return (NULL);
	str[length + 1] = NULL;
	if (n == 0)
		length--;
	while (length)
	{
		str[length] = (n % 10) + '0';
		n /= 10;
		printf("value %c\n", str[length]);
		printf("len: %zu\n", length);
		length--;
	}
	printf("%c\n", str[1]);
	if (sign == 1)
		str[0] = '-';
	printf("value1 %c\n", str[0]);
	printf("value2 %c\n", str[1]);
	return (str);
}

int	main()
{
	int	n = 42;

	printf("%s\n", ft_itoa(n));
}
