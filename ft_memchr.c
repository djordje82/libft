/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:53:20 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/15 13:08:06 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, unsigned int n)
{
	char		*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;

	while (i < n)
	{
		if ((unsigned char)str[i] == 
