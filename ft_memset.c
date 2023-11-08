/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:49 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/07 11:17:14 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char    *str;
    size_t i;

    i = 0;
    str = (char *)s;

    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return (str);
}

int main()
{
    char    str[] = "Voici une phrase de test";
    printf("%s\n", ft_memset(str, '%', 3));
}