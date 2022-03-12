/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:12 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 12:55:56 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			x;

	x = 0;
	str = (unsigned char *)b;
	while (x < len)
	{
		str[x] = (unsigned char)c;
		x++;
	}
	return (b);
}

// int main()
// {
//     char str[50] = "itsoktocryy";
//     printf("\nBefore memset(): %s\n", str);
//     memset(str, '0', 5);
//     printf("After memset():  %s", str);
//     return (0);
// }