/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:18:08 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/13 14:54:33 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	i = 0;
	if (!src && !dest)
		return (NULL);
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
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
			cdest[n] = csrc[n];
			n--;
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
//     const char    src[] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
//     char    dest[] = "";

//     printf("Avant memmove dest = %s\n", dest);
//     ft_memmove(dest, src, 33);
//     printf("Apres memmove dest = %s\n", dest);
// }
