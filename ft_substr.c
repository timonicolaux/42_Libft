/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:42:04 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/08 17:12:41 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}

// int	main()
// {
// 	char	str[] = "voici une phrase";
// 	unsigned int	start = 4;
// 	size_t	len = ft_strlen(str);

// 	printf("%s\n", ft_substr(str, start, len));
// }
