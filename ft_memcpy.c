/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:40 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/13 14:09:51 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}

// int main()
// {
//     char src[] = "hello world";
//     char dst[] = "itsok";
//     ft_memcpy(dst, src, 0);
// 	printf("%s\n", dst);
// 	memcpy(dst, src, 0);
//     printf("%s", dst);
// }