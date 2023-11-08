/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:10:52 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/08 13:21:03 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (little[j] == big[i + j] && (i + j) < len)
		{
			if (j == (ft_strlen(little) - 1))
				return ((char *)&little[0]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int	main()
{
	const char big[] = "une longue phrase";
	const char little[] = "une";
	size_t	len = 3;

	printf("%d\n", ft_strnstr(big, little, len));
}

