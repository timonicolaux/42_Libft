/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:42:04 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/13 16:26:44 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(s);
	if (length < start)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start <= len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// int	main()
// {
// 	char	str[] = "i just want this part #############";
// 	unsigned int	start = 5;
// 	size_t	len = ft_strlen(str);

// 	printf("%s\n", ft_substr(str, start, len));
// }
