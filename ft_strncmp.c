/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:41 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/06 17:23:37 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	x = 0;
	if (n == 0)
		return (0);
	while (str1[x] == str2[x] && str1[x] != '\0'
		&& str2[x] != '\0' && x + 1 < n)
		x++;
	return (str1[x] - str2[x]);
}

// int main()
// {
//     char st1[11] = "itsoktocryy";
//     char st2[11] = "helloworld";
//     printf("%d\n", ft_strncmp(st1, st2, 7));
//     printf("%d\n", strncmp(st1, st2, 7));
//     return (0);
// }