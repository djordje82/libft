/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordevi <ddordevi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:31:04 by dodordev          #+#    #+#             */
/*   Updated: 2023/11/21 11:40:36 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = c;
	}
	return (s);
}

/*
The function `ft_memset` fills the first `n` bytes of the memory area pointed to by `s` with the byte `c`.

Input Arguments:
	•  `void *s`: A pointer to the memory area to fill.
	•  `int c`: The byte value to fill the memory with (as an integer, but treated as an `unsigned char`).
	•  `size_t n`: The number of bytes to be filled.

Output Argument: It returns the original pointer `s`.


The standard C library provides `memset` in the `<string.h>` header. It performs the same function.

Practical Implementations
	• Initializing or resetting a buffer to a specific value.
	• Preparing a memory area before use, ensuring it doesn't contain garbage values.
	• Used in implementing higher-level memory initialization functions in custom libraries.

Key Takeaways
	• `ft_memset` is essential for memory manipulation in C.
	• Pointer arithmetic and byte-level operations are fundamental in systems and low-level programming.
	• The function provides a straightforward yet powerful way to manipulate blocks of memory.
*/
