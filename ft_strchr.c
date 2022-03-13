/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:51 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/13 11:52:27 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	*str;

	str = (char *)s;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == (char)c)
			return (&str[x]);
		x++;
	}
	if ((char)c == '\0')
		return (&str[x]);
	return (NULL);
}

// int main()
// {
//     char *str = "itsoktocryy";
//     int c = '\0';
//     printf("\nft_memchr - %p\n", ft_strchr(str, c));
// 	printf("ft_memchr - %s\n\n", ft_strchr(str, c));
// 	printf("memchr - %p\n", strchr(str, c));
// 	printf("memchr - %s\n\n", strchr(str, c));
//     return (0);
// }