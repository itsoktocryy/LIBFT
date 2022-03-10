/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:46 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/10 15:28:13 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	if (!c)
		return ((char *)&s[x]);
	while (x >= 0)
	{
		if (s[x] == c)
			return ((char *)&s[x]);
		x--;
	}
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