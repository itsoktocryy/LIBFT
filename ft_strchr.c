/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:51 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/10 15:27:38 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return ((char *)&s[x]);
		x++;
	}
	if (!c)
		return ((char *)&s[x]);
	return (0);
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