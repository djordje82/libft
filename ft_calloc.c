/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:06:25 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/27 17:35:20 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (count > 0 && SIZE_MAX / count < size)
		return (NULL);
	tmp = malloc(count * size);
	if (tmp)
		ft_bzero(tmp, count * size);
	return (tmp);
}
