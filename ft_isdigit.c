/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:39:14 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 11:35:06 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

/*
The ft_isdigit function is designed to check whether a given integer n corresponds to the ASCII code of a numeric digit (ranging from '0' to '9').

Input Argument: The function accepts a single argument, n, which is an integer.
Output Argument: It returns 1 if n is a digit, and 0 otherwise.

In the standard C library, there is a function named isdigit() found in <ctype.h> which serves the same purpose.

Practical Implementations:

	• Validating Numeric Inputs: Commonly used to ensure that user inputs or data read from files are numeric.
	• Data Parsing: Useful in scenarios where numeric values need to be parsed out of strings.
	• Form Field Validation: In user interface forms, to verify that inputs like age or phone numbers are digits.
	• Conditional Logic in Programs: In various programming constructs where digit-specific operations are required.


Key Takeaways:

	• Simple Validation Technique: This function exemplifies a straightforward method for validating numeric characters.
	• Utility in ASCII Understanding: Understanding ASCII values is crucial for such character-related functions.
	• No Loops or Complex Constructs: The function's simplicity, with a single if-else construct, highlights the efficiency of achieving the objective without complex logic.
	• Replicating Standard Library Functions: Creating functions similar to standard library functions can be a great learning tool to understand basic programming concepts.
	• Wide Applicability: Such basic functions are widely applicable across various programming scenarios, especially in input validation and data processing.

*/
