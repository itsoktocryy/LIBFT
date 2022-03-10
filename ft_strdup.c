/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:07:38 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/05 21:22:43 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*ptr;
	size_t			size;
	unsigned int	x;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	else
	{
		x = 0;
		while (s1[x])
		{
			ptr[x] = s1[x];
			x++;
		}
		ptr[x] = '\0';
		return (ptr);
	}
}

// int main()
// {
//     const char *s1 = "hello world";
//     char *copy = ft_strdup(s1);
//     printf("%s", copy);
//     free(copy);
//     return (0);
// }