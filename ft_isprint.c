/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:45 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/07 09:20:27 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("Pour ce caractère le résultat est de %d\n", ft_isprint(av[1][0]));
    else
        printf("Saisissez un caractère svp\n");
}