/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:02 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/09 13:42:17 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	size_t	x;

	x = 0;
	while (set[x])
	{
		if (set[x] == c)
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	x;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)(s1));
	start = 0;
	while (s1[start] && ft_inset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_inset(s1[end - 1], set))
		end--;
	str = malloc(sizeof(*str) * (end - start) + 1);
	if (!str)
		return (NULL);
	x = 0;
	while (start < end)
		str[x++] = s1[start++];
	str[x] = '\0';
	return (str);
}

// int main()
// {
//     char *res;
//     res = ft_strtrim("Hello World I'm Crazeyy", "Hello Crazeyy"); 
//     printf("%s", res);
//     return (0);
// }