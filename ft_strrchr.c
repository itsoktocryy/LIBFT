/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:46 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/13 11:52:21 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	*str;

	str = (char *)s;
	x = 0;
	while (str[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (str[x] == (char)c)
			return (&str[x]);
		x--;
	}
	if ((char)c == '\0')
		return (&str[x]);
	return (NULL);
}

// int main()
// {
//     char *str = "itsoktocryy";
//     int c = '\0';
//     printf("\nft_memchr - %p\n", ft_strrchr(str, c));
// 	printf("ft_memchr - %s\n\n", ft_strrchr(str, c));
// 	printf("memchr - %p\n", strrchr(str, c));
// 	printf("memchr - %s\n\n", strrchr(str, c));
//     return (0);
// }