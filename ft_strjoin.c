#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t  i;
	size_t  j;
	char    *final;

	i = 0;
	j = 0;
	final = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!final)
		return (0);
	while (s1[i])
		final[j++] = s1[i++];
	i = 0;
	while (s2[i])
		final[j++] = s2[i++];
	final[j] = 0;
	return (final);
}
