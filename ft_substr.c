/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:07:16 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/15 01:52:35 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	i;
	size_t	size;
	char	*str;

	if (!s)
		return (0);
	size = 0;
	while (s[start + size] && size < len)
		size++;
	str = malloc(sizeof(char) * (size) + 1);
	if (!str)
		return (NULL);
	x = 0;
	i = 0;
	while (s[x])
	{
		if (x >= start && i < len)
			str[i++] = s[x];
		x++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char s[11] = "hello world";
//     unsigned int start = 6;
//     size_t len = 0;
//     printf("%s", ft_substr(s,start,len));
//     return (0);
// }