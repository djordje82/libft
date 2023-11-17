/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:31:04 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/17 17:18:07 by ddordevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*p;

	p = (unsigned char *)ptr;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (ptr);
}