/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:39:45 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/13 17:33:19 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

// int	main()
// {
// 	printf("%d\n", ft_calloc(3, sizeof(int)));
// 	printf("%d\n", calloc(3, sizeof(int)));
// }
