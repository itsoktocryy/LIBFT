/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:11 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/11 03:02:50 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	res;
	size_t	x;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	res = 0;
	x = 0;
	if (dstsize == 0)
		return (len_src);
	if (dstsize > len_dst)
		res = len_dst + len_src;
	else
		res = dstsize + len_src;
	while (src[x] && len_dst < dstsize - 1)
	{
		dst[len_dst] = src[x];
		len_dst++;
		x++;
	}
	dst[len_dst] = '\0';
	return (res);
}

// int main()
// {
//      char src[20] = "helloworld";
//      char dst[20] = "tryme"; 
//      ft_strlcat(dst, src, 0);
// 	 printf("%s\n", dst);
// 	 strlcat(dst, src, 0);
// 	 printf("%s", dst);
// }