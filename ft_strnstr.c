/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:22 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/13 11:44:31 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	i;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (haystack[x] && x < len)
	{
		i = 0;
		while (needle[i] && haystack[x + i]
			&& needle[i] == haystack[x + i] && (x + i) < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[x]);
		}
		x++;
	}
	return (0);
}

// int main()
// {
//     const char *str;
//     const char *needle;
//     size_t len = 11;
//     void *s = "itsoktocryy";
//     void *n = "";
//     str = (char *)s;
//     needle = (char *)n;
//     printf("ft_strnstr - %s\n", ft_strnstr(str, needle, len));
//     printf("strnstr - %s\n", strnstr(str, needle, len));
//     return (0);
// }