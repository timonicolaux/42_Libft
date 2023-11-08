/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:18:08 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/07 12:25:47 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *csrc = (char *)src;
    char    *cdest = (char *)dest;

    char    temp[n];

    i = 0;
    while (n > i)
    {
        temp[i] = csrc[i];
        i++;
    }
    i = 0;
    while (n > i)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return (cdest);
}

int main()
{
    char    src[] = "source";
    char    dest[] = "destination";

    printf("Avant memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, ft_strlen(src)+1);
    printf("Apres memcpy dest = %s\n", dest);
}