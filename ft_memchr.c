/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:53:20 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/17 17:13:05 by ddordevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*position;
	unsigned char	uc;

	position = (unsigned char *)s;
	uc = (unsigned char)uc;

	while (n--)
	{
		if (*position == uc)
			return ((void *)position);
		position++;
	}
	return (0);
}