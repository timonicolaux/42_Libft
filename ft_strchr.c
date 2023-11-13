/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:11:11 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/13 16:49:59 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	car;

	i = 0;
	car = (char)c;
	str = (char *)s;
	while (str[i] && str[i] != car)
		i++;
	if (str[i] == car)
		return (&str[i]);
	else
		return (0);
}

// int main()
// {
//     const char  str[] = "saucisse";
//     int c = 'i';
//     printf("%s\n", ft_strchr(str, c));
//     printf("%s\n", strchr(str, c));
// }
