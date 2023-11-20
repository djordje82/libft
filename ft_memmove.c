/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:59:08 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/18 17:16:43 by ddordevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (0);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dst, tmp, n);
	free(tmp);
	return (dst);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}