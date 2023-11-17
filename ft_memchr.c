/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:53:20 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/17 15:42:36 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*position;
	unsigned char	uc;

	position = (unsigned char *)s;
	uc = (unsigned char)uc;

	while (n--)
	{
		if (*position == uc)
			return ((void *)position);
		p++;
	}
	return (0);
}
