/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:40 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/06 16:43:04 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	x;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (d);
}

// int main()
// {
//     char src[] = "hello world";
//     char dst[] = "itsoktocryy";
//     ft_memcpy(dst, src, 6);
// 	//memcpy(dst, src, 6);
//     printf("%s", dst);
// }