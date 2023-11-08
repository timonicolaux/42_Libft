/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:41:16 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/08 10:10:13 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	int	array1[] = {10, 12, 14};
// 	int	array2[] = {88, 26, 14};
// 	char	array1[] = "ab";
// 	char	array2[] = "bb";
// 	size_t  size = sizeof(char) * 3;

// 	printf("%d\n", ft_memcmp(array1, array2, size));
// 	printf("%d\n", memcmp(array1, array2, size));
// }
