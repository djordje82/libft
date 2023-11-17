/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:03:07 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/17 17:15:22 by ddordevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
char	*ft_strrchar_v2(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + len) == c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}

int main()
{
	const char *test_string = "Hello, world!";
	int test_char = 'o';

	char *result_custom = ft_strrchr(test_string, test_char);
	//char *result_customv2 = ft_strrchar_v2(test_string, test_char);
	char *result_standard = strrchr(test_string, test_char);

	printf("Custom function result: %s\n", result_custom);
	//printf("Custom function v2 result: %s\n", result_customv2);
	printf("Standard function result: %s\n", result_standard);

	return (0);
}
*/


