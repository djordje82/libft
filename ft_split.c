/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:05:46 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/25 01:43:10 by ddordevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strcounter(char const *s, char c)
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

static void	freearr(size_t i, char **arr)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static int	fillarr(char **arr, size_t str_count, char const *s, char c)
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
			freearr(index, arr);
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
	str_count = strcounter(s, c);
	arr = (char **)malloc(sizeof(char *) * (str_count + 1));
	if (!arr)
		return (NULL);
	if (!fillarr(arr, str_count, s, c))
	{
		return (NULL);
	}
	return (arr);
}
