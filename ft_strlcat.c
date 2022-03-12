/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:11 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/11 23:53:09 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	x;
	size_t	i;
	size_t	res;

	i = ft_strlen(dst);
	x = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < 1)
		return (src_len + dstsize);
	while (src[x] && i < dstsize - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	if (dstsize < dst_len)
		res = src_len + dstsize;
	else
		res = dst_len + src_len;
	return (res);
}

// int main()
// {
//     char src[10] = "helloworld";
//     char dst[50] = "tryme";   
//     ft_strlcat(dst, src, 16);
//     printf("%s\n", dst);
// 	strlcat(dst, src, 16);
// 	printf("%s\n", dst);
// }