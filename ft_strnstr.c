/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:44:16 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 15:55:36 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (h < len && haystack[h])
	{
		while (h < len && needle[n] && haystack[h] && needle[n] == haystack[h])
		{
			n++;
			h++;
		}
		if (needle[n] == '\0')
			return ((char *)&haystack[h - n]);
		h = h - n + 1;
	}
	return (0);
}
