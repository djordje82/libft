/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:33 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 11:28:02 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
The purpose of the ft_isalpha function is to check if a given character is an alphabetic letter, 
either uppercase or lowercase. 
It mirrors the functionality of the isalpha function from the C standard library, 
typically found in <ctype.h>. 
This function is used for character classification in various programming contexts.

This function does not have traditional input and output arguments like a standard C function. 
Instead, it takes a single argument, an int representing the character to check, 
and returns an integer value indicating the result.
*/
