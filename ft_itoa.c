/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:14:51 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 15:45:36 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	sign;
	size_t	length;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = nbr_len(n);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	while (length)
	{
		str[length - 1] = (n % 10) + '0';
		n /= 10;
		length--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

// int	main()
// {
// 	int	n = -21;

// 	printf("%s\n", ft_itoa(n));
// }
