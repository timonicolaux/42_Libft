/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:31 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/07 09:20:22 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) && ft_isdigit(c))
        return (1);
    else
        return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("Pour ce caractère, le résultat est de %d\n", ft_isalnum(av[1][0]));
    else
        printf("Saisissez un caractère svp\n");
}
