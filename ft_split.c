/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:11 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/09 14:11:20 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate_total_size(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i - 1] && s[i - 1] != c))
			count++;
		i++;
	}
	//dans le cas ou aucun separateur ou dernier mot
	if (s[i] != c)
		count++;
	printf("count : %d\n",count);
	return (count);
}

int	calculate_individual_size(char const *s, size_t i, char c)
{
	size_t	count;

	count = 0;
	while (s[i] != c && s[i])
	{
		i--;
		count++;
	}
	return (count);
}

void	fill_values(char *individual_str, const char *s, size_t end_index, size_t length)
{
	size_t	start_index;
	size_t	i;

	start_index = end_index - length;
	i = 0;
	if (s[end_index + 1] == '\0')
		end_index++;
	while (start_index < end_index)
	{
		individual_str[i] = s[start_index];
		start_index++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;

	i = 0;
	j = 0;
	array = malloc(sizeof(char *) * (calculate_total_size(s, c) + 1));
	if (!array)
		return (NULL);
	array[(calculate_total_size(s, c) + 1)] == NULL;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			array[j] = malloc(sizeof(char) * (calculate_individual_size(s, (i - 1), c) + 1));
			if (!array[j])
				return (NULL);
			fill_values(array[j], s, i, calculate_individual_size(s, (i - 1), c));
			j++;
		}
		i++;
	}
	return (array);
}

int	main()
{
	// char	str[] = "il*faut*decouper*cette*phrase"; /*OK*/
	char	str[] = "**decouper*cette*phrase";
	char	c = '*';
	char	**result;
	size_t	i;

	i = 0;
	result = ft_split(str, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}
