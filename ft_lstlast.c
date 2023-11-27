/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:07:01 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/27 14:15:20 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *last)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
		tmp = tmp->next;
	return (tmp);
}
