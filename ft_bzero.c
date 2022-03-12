/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:54 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 12:56:48 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			x;

	x = 0;
	str = (unsigned char *)s;
	while (x < n)
	{
		str[x] = '\0';
		x++;
	}
}

// int	main()
// {
//     char str[] = "hello world";
//     puts(str);
//     ft_bzero(str, 0);
// 	puts(str);
// }