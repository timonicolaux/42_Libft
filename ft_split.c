/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:11 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/15 15:48:25 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	caltsize(char const *s, char c)
{
	int	i;
	int	count;
	int	length;

	i = 0;
	count = 0;
	length = ft_strlen(s);
	while (s[i])
	{
		if (s[i] != c && i == 0)
			count++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (count == length)
		return (0);
	if (count == 0)
		count++;
	return (count);
}

int	calisize(char const *s, int i, char c, int first)
{
	int	count;

	count = 0;
	if (first == 1)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			count++;
			i++;
		}
	}
	else
	{
		while (s[i + 1] != c && s[i])
		{
			i++;
			count++;
		}
	}
	// printf("individual size: %d\n", count);
	return (count);
}

char	*fill_values(char *individual_str, const char *s,
int start_index, char c)
{
	int	end_index;
	int	i;
	int	length;

	length = calisize(s, start_index, c, 0) + 1;
	individual_str = malloc(sizeof(char) * length + 1);
	if (!individual_str)
		return (NULL);
	end_index = start_index + length;
	i = 0;
	while (i < length)
	{
		individual_str[i] = s[start_index];
		start_index++;
		i++;
	}
	individual_str[i] = '\0';
	return (individual_str);
}

char	*fill_first_value(char *individual_str, const char *s, char c)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = calisize(s, 0, c, 1) + 1;
	individual_str = malloc(sizeof(char) * (length + 1));
	if (!individual_str)
		return (NULL);
	while (s[i] == c)
			i++;
	while (s[i] != c)
	{
		individual_str[j] = s[i];
		j++;
		i++;
	}
	individual_str[j] = '\0';
	return (individual_str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = malloc(sizeof(char *) * (caltsize(s, c) + 1));
	// printf("total size: %d\n", caltsize(s, c));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			array[j] = fill_values(array[j], s, i + 1, c);
			j++;
		}
		if (s[i] != c && i == 0)
		{
			array[j] = fill_first_value(array[j], s, c);
			j++;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}

// int	main()
// {
// 	// char	str[] = "il*faut*decouper*cette*phrase"; /*OK*/
// 	// char	str[] = "**decouper**cette*phrase**";
// 	// const char	str[] = "  tripouille  42  ";
// 	char str[] = "split  ||this|for|me|||||!|";
// 	char	c = '|';
// 	char	**result;
// 	int	i;

// 	i = 0;
// 	result = ft_split(str, c);
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// }
