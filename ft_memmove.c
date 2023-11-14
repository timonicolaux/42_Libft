/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:18:08 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/14 14:05:51 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;

	if (src == dest || n == 0)
		return (dest);
	if (dest < src)
	{
		csrc = (unsigned char *)src;
		cdest = (unsigned char *)dest;
		while (n--)
			*cdest++ = *csrc++;
	}
	else
	{
		csrc = (unsigned char *)src + (n - 1);
		cdest = (unsigned char *)dest + (n - 1);
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
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
//     const char    src[] = "test";
//     char    dest[] = "";

//     printf("Avant memmove dest = %s\n", dest);
//     ft_memmove(dest, src, 33);
//     printf("Apres memmove dest = %s\n", dest);
// }
