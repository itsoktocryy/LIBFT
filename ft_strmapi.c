/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:16:36 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 13:59:58 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*output;

	if (!s || !f)
		return (NULL);
	output = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!output)
		return (NULL);
	x = 0;
	while (s[x])
	{
		output[x] = f(x, s[x]);
		x++;
	}
	output[x] = '\0';
	return (output);
}

// static char f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + 2;
// 	return (str);
// }
// int main()
// {
// 	char str1[] = "grqmirmapww";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }