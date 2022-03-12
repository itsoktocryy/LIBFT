/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:25 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/11 23:53:19 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	count;

	x = 0;
	count = 0;
	while (src[count])
		count++;
	if (dstsize < 1)
		return (count);
	while (src[x] && x < dstsize - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (count);
}

// int main()
// {
//     char src[10] = "helloworld";
//     char dst[15] = "tryme";   
//     ft_strlcpy(dst, src, 5);
//     printf("%s\n", dst);
// 	strlcpy(dst, src, 5);
// 	printf("%s\n", dst);
// }