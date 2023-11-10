/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:56:01 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 13:41:29 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	remove_check(char const *set, char const c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	remove_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if (remove_check(set, s1[i]) == 0)
			size++;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*result;

	size = 0;
	i = 0;
	j = 0;
	size = remove_size(s1, set);
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		if (remove_check(set, s1[i]) == 0)
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}

// int	main()
// {
// 	char	str1[] = "banyyanua";
// 	char	str2[] = "yu";

// 	printf("%s\n", ft_strtrim(str1, str2));
// }
