/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:47:48 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 11:26:44 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || \
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
The `ft_isalnum` function is designed to check whether a given integer `c` corresponds to the ASCII code of an alphanumeric character (either a digit or a letter).

Input Argument: It accepts a single argument, `c`, which is an integer.
Output Argument: The function returns `1` (true) if `c` is alphanumeric, and `0` (false) otherwise.

The standard C library provides `isalnum()` in `<ctype.h>`, which serves the same purpose.

Practical Implementations:

	• User Input Validation: Ensuring that a string contains only letters and digits, like in usernames or passwords.
	• Data Parsing: Identifying alphanumeric parts in a mixed string of characters and symbols.
	• Text Processing: Useful in scenarios like tokenizing a text where separating words and numbers from other characters is required.
	• Form Field Validation: In web forms or applications, ensuring that certain fields contain only letters and numbers.

Key Takeaways:

	• Combining Character Checks: This function illustrates how to combine multiple character checks into a single validation function.
	• Efficiency in ASCII Ranges: Utilizing ASCII value ranges makes the function efficient and concise.
	• No Complex Constructs Needed: The function achieves its purpose with a simple if-else statement, without needing loops or complex logic.
	• Versatility in Applications: Functions like `ft_isalnum` are highly versatile and find applications in various fields of computing, from simple user input validation to complex text processing.
	• Emphasizing ASCII Understanding: This function, like others dealing with characters, underscores the importance of understanding ASCII values in programming.
*/
