/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:23:18 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/17 16:39:55 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
`ft_strlen` is a custom implementation of the `strlen` function found in the C standard library. Its purpose is to calculate the length of a string.

Input Argument: A pointer to a character array (`char *str`), representing the string whose length is to be determined.
Output Argument: Returns the length of the string as an integer.

The C standard library provides the `strlen` function in `<string.h>`. It works similarly by returning the length of a string, not including the terminating null byte (`\0`).

Practical Implementations:

	• Determining the length of strings for buffer allocation.
	• Looping through characters in a string.
	• Validating string content by checking its length.
	• Used in various string manipulation functions where knowing the length of the string is necessary.


Key Takeaways:

	• The `ft_strlen` function is essential for many basic operations in string handling.
	• This function demonstrates the importance of the null terminator in C strings.
	• Custom implementations of standard library functions can be useful for learning or in environments where the standard library is not available.
*/
