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

Practical Implementations:

	• Data Validation: Useful in scenarios where it's necessary to ensure a character is an alphabetic letter, such as in user input validation or data processing.
	• Text Parsing: Helpful in parsing tasks where distinguishing between alphabetic and non-alphabetic characters is essential, such as in compilers or text analysis software.
	• Programming Utilities: Can be used in various utility functions that require checks for character types, such as in custom parsers or format validators.


Key Takeaways:

	• Character Classification: ft_isalpha demonstrates a fundamental aspect of character handling in C, which is the ability to classify characters based on their ASCII values.
	• Conditional Logic: This function is a good example of using conditional statements to determine a character's category.
	• ASCII Understanding: Understanding the ASCII table is crucial for such functions, as it defines the numerical values corresponding to different characters.
	• Functionality Replication: It illustrates how standard library functions like isalpha can be replicated to understand their underlying logic or to create custom versions for specific needs.
	• Simplicity and Efficiency: The function shows that effective programming often involves straightforward logic, efficiently achieving the desired outcome with minimal complexity.

*/
