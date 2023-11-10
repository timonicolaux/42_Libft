/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:37:56 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 13:51:12 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	// ft_isalpha
	printf("--ft_isalpha--\n");
	printf("Resultat : %d\n", ft_isalpha('A'));
	// ft_isdigit
	printf("--ft_isdigit--\n");
	printf("Resultat : %d\n", ft_isdigit('2'));
	// ft_isalnum
	printf("--ft_isalnum--\n");
	printf("Resultat : %d\n", ft_isalnum('2'));
	// ft_isascii
	printf("--ft_isascii--\n");
	printf("Resultat : %d\n", ft_isascii('t'));
	// ft_isprint
	printf("--ft_isprint--\n");
	printf("Resultat : %d\n", ft_isprint('b'));
	// ft_strlen
	printf("--ft_strlen--\n");
	printf("Longueur de %zu\n caractères", ft_strlen("test"));
	// ft_memset
	printf("--ft_memset--\n");
	printf("%s\n", ft_memset("Voici une phrase de test", '%', 3));
	// ft_bzero
	// printf("--ft_bzero--\n");
	// printf("%s\n", ft_bzero("Coucou tout le monde", 3));
}
