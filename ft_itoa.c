/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:14:51 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/13 16:24:12 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr_len(int n)
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
	int		sign;
	int		length;
	char	*str;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_nbr_len(n);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	while (length--)
	{
		str[length] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

// int	main()
// {
// 	int	n = 1;

// 	printf("%s\n", ft_itoa(0));
// }
