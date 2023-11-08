/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:39 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/07 09:20:14 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("Pour ce caractère, le résultat est de %d\n", ft_isascii(av[1][0]));
    else
        printf("Saisissez un caractère svp\n");
}