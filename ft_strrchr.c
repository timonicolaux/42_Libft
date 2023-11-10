/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:43:25 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 10:23:27 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != c && i > 0)
		i--;
	if (str[i] == c)
		return (&str[i]);
	else
		return (0);
}

// int main()
// {
//     const char  str[] = "saucissie";
//     int c = 'i';
//     printf("%s\n", ft_strrchr(str, c));
//     printf("%s\n", strrchr(str, c));
// }
