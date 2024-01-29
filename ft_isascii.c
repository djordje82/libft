/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:01:27 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 11:34:22 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
The `ft_isascii` function checks if a given integer `c` corresponds to an ASCII character. ASCII characters have decimal values ranging from 0 to 127.

Input Argument: The function accepts a single argument, `c`, which is an integer representing a character code.
Output Argument: It returns `1` (true) if `c` is within the ASCII range, and `0` (false) otherwise.

The standard C library includes `isascii()` in `<ctype.h>`, performing the same check.

Practical Implementations

	• Character Encoding Validation: To ensure that a character falls within the standard ASCII range, particularly useful in systems where extended ASCII or non-ASCII characters may cause issues.
	• Data Parsing and Sanitization: When parsing text data, ensuring that all characters are ASCII can be crucial for compatibility reasons.
	• Network Communications: In protocols where ASCII is the standard (like HTTP headers), this function can validate that the data conforms.
	• Input Validation: In scenarios where only ASCII characters are acceptable (like certain usernames, codes, etc.).


Key Takeaways:

	• Simplicity and Efficiency: `ft_isascii` demonstrates an efficient way to validate character encoding using a straightforward conditional check.
	• Understanding ASCII: The function relies on the understanding of ASCII character encoding, highlighting its importance in programming.
	• Wide Application: Despite its simplicity, the function has broad applications in data validation and processing.
	• Compatibility Considerations: This function is particularly useful in contexts where ASCII compatibility is essential, underlining the ongoing relevance of ASCII in modern computing environments.
*/
