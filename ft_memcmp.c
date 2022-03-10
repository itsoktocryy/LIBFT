/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:29 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/06 16:38:39 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			x;

	x = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (x < n)
	{
		if (str1[x] != str2[x])
			return (str1[x] - str2[x]);
		x++;
	}
	return (0);
}

// int main()
// {
//     char st1[] = "9";
//     char st2[] = "8";
//     printf("%d\n", ft_memcmp(st1, st2, 5));
//     printf("%d\n", memcmp(st1, st2, 5));
//     return (0);
// }