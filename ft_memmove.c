/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:18:08 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 14:06:35 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (csrc < cdest)
	{
		while (i < n)
		{
			cdest[n - i] = csrc[n - i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (cdest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*csrc;
// 	char	*cdest;
// 	char	*temp;

// 	i = 0;
// 	csrc = (char *)src;
// 	cdest = (char *)dest;
// 	while (n > i)
// 	{
// 		temp[i] = csrc[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (n > i)
// 	{
// 		cdest[i] = csrc[i];
// 		i++;
// 	}
// 	return (cdest);
// }

// int main()
// {
//     char    src[] = "source";
//     char    dest[] = "destination";

//     printf("Avant memcpy dest = %s\n", dest);
//     ft_memcpy(dest, src, ft_strlen(src)+1);
//     printf("Apres memcpy dest = %s\n", dest);
// }
