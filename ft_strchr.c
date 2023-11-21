/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:46:55 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 18:00:19 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	n;

	n = (unsigned char)c;
	while (*s)
	{
		if (*s == n)
			return ((char *)s);
		s++;
	}
	if (n == '\0')
		return ((char *)s);
	return (0);
}
