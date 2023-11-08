/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:35 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/07 09:20:20 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        printf("Pour ce caractère, le résultat est de %d\n", ft_isalpha(av[1][0]));
    else
        printf("Saisissez un caractère svp\n");
}
