/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:46 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/11 13:58:35 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	*str;
	char	cc;

	str = (char *)s;
	cc = (char)c;
	x = 0;
	while (str[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (str[x] == (char)cc)
			return ((char *)&str[x]);
		x--;
	}
	if (cc == '\0')
		return ((char *)&str[x]);
	return (0);
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