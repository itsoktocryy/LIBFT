/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:32 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/09 15:39:55 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;

	x = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else if (src >= dst)
	{
		while (x < len)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dst);
}

// int main()
// {
//     char dst[] = "itsoktocryy";
//     char src[] = "hello123";
//     printf("%s\n", (char*)ft_memmove(dst, src, 4));
// 	printf("%s", (char*)memmove(dst, src, 4));
// 	return (0);
// }