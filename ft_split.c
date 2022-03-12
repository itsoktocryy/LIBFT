/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:15:50 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 14:14:19 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **s, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char	**ft_get_res(char const *s, char c)
{
	size_t	count;
	char	**res;
	int		is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = 0;
	count--;
	return (res);
}

static char	*ft_get_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static char	**ft_get_split(char **res, char const *s, char c)
{
	size_t	word;
	size_t	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[word] = ft_get_word(&s[i], c);
			if (!res[word])
			{
				ft_freeall(res, word);
				return (NULL);
			}
			word++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (0);
	res = ft_get_res(s, c);
	if (!res)
		return (NULL);
	res = ft_get_split(res, s, c);
	if (!res)
		return (NULL);
	return (res);
}

// int main()
// {
// 	int i = 0;
// 	char **tab;
// 	tab = ft_split("Hello World I'ts Ok To Cryy", ' ');
// 	while (tab[i])
// 	{
// 		printf("string %d : %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }