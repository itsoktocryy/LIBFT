/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:07:16 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 13:54:10 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	x = 0;
	i = 0;
	while (s[x])
	{
		if (x >= start && i < len)
		{
			str[i] = s[x];
			i++;
		}
		x++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char s[11] = "hello world";
//     unsigned int start = 3;
//     size_t len = 11;
//     printf("%s", ft_substr(s,start,len));
//     return (0);
// }