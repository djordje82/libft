/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:59:08 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 11:39:43 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
