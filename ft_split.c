/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:05:46 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/25 14:23:39 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_counter(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
	}
	return (count);
}

static void	free_arr(size_t i, char **arr)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static int	fill_arr(char **arr, size_t str_count, char const *s, char c)
{
	size_t	index;
	size_t	len_word;

	index = 0;
	while (index < str_count)
	{
		len_word = 0;
		while (*s == c && *s)
			s++;
		while (s[len_word] != c && s[len_word])
			len_word++;
		arr[index] = ft_substr(s, 0, len_word);
		if (!arr[index])
		{
			free_arr(index, arr);
			return (0);
		}
		s += len_word;
		index++;
	}
	arr[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	str_count;
	char	**arr;

	if (!s)
		return (NULL);
	str_count = str_counter(s, c);
	arr = (char **)malloc(sizeof(char *) * (str_count + 1));
	if (!arr)
		return (NULL);
	if (!fill_arr(arr, str_count, s, c))
	{
		return (NULL);
	}
	return (arr);
}
