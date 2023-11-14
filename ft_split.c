/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:11 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/14 15:48:32 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate_total_size(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i - 1] && s[i - 1] != c))
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

int	calculate_individual_size(char const *s, int i, char c)
{
	int	count;

	count = 0;
	if (i == 0)
	{
		while (s[i] != c && s[i])
		{
			i++;
			count++;
		}
	}
	else
	{
		while (s[i] != c && s[i])
		{
			i--;
			count++;
		}
	}
	return (count);
}

void	fill_values(char *individual_str, const char *s,
int end_index, char c)
{
	int	start_index;
	int	i;
	int	length;

	length = calculate_individual_size(s, (end_index - 1), c);
	start_index = end_index - length;
	if (length == 0)
		return ;
	i = 0;
	if (s[end_index + 1] == '\0')
		end_index++;
	while (start_index < end_index)
	{
		if (s[start_index] == c)
			break ;
		individual_str[i] = s[start_index];
		start_index++;
		i++;
	}
	individual_str[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	total_size;
	int	individual_size;
	char	**array;

	i = 0;
	j = 0;
	printf("total size : %d\n", (calculate_total_size(s, c) + 1));

	array = malloc(sizeof(char *) * (calculate_total_size(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		individual_size = calculate_individual_size(s, i, c);
		printf("individual size : %d\n", calculate_individual_size(s, (i - 1), c));
		if ((s[i] == c || s[i + 1] == '\0') && individual_size != 0)
		{
			array[j] = malloc(sizeof(char) * (individual_size + 1));
			if (!array[j])
				return (NULL);
			fill_values(array[j], s, i, c);
			j++;
		}
		i++;
	}
	array[j] = '\0';
	return (array);
}

int	main()
{
	// char	str[] = "il*faut*decouper*cette*phrase"; /*OK*/
	// char	str[] = "**decouper**cette*phrase**";
	char	str[] = "hello!";
	char	c = ' ';
	char	**result;
	int	i;

	i = 0;
	result = ft_split(str, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}
