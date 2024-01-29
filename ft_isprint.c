/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:20 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/13 15:42:28 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
Purpose of `ft_isprint` function is to check if the given integer `c` represents a printable ASCII character.

Input Argument: `int c` - The character to be checked, represented as an integer.
Output Argument: Returns `1` if `c` is a printable ASCII character, otherwise returns `0`.

The standard C library provides the `isprint()` function in `<ctype.h>`, serving the same purpose.

Practical Implementations

	• Input Validation: Ensuring that characters entered in text fields or forms are printable and don't include control characters.
	• Text Rendering: Useful in graphical user interfaces or text editors to render only printable characters.
	• Data Sanitization: Removing non-printable characters from data streams or files to prevent rendering issues or security vulnerabilities.
	• String Processing: In programming tasks that involve manipulating text data, ensuring that the characters are suitable for display.

Key Takeaways

	• Printable Range: Printable ASCII characters span from 32 to 126, with characters outside this range being control characters or non-ASCII.
	• Utility in User Interfaces: The function is particularly useful in scenarios where text needs to be displayed or printed.
	• Simple Yet Effective: Demonstrates a straightforward approach for character classification.
	• Cross-Platform Compatibility: Highlights the importance of handling printable characters in diverse computing environments.
*/
