/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:09:57 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/10 15:13:34 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	x;

	x = 0;
	str = (unsigned char *)s;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
			return (&str[x]);
		x++;
	}
	return (NULL);
}

// int main()
// {
//     unsigned int n = 11;
//     char *str = "itsoktocryy";
//     int c = 'o';
//     printf("\nft_memchr - %p\n", ft_memchr(str, c, n));
// 	printf("ft_memchr - %s\n\n", (unsigned char *)ft_memchr(str, c, n));
// 	printf("memchr - %p\n", memchr(str, c, n));
// 	printf("memchr - %s\n\n", (unsigned char *)memchr(str, c, n));
//     return (0);
// }