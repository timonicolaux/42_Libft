/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonicolaux <timonicolaux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:02 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/16 18:35:18 by timonicolau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
//     char    str[] = "Coucou tout le monde";
//     size_t  size = 3;
//     ft_bzero(str, size);
//     printf("%s\n", str);
//     bzero(str, size);
//     printf("ici %s\n", str);
// }
