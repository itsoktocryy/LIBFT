/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:44:35 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/04 15:28:01 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	if (s != NULL && f != NULL)
	{
		while (s[x] != '\0')
		{
			f(x, &s[x]);
			x++;
		}
	}
}

// void f(unsigned int i, char *c)
// {
// 	*c = *c + 2;
// }
// int main()
// {
// 	char str1[] = "grqmirmapww";
// 	ft_striteri(str1, f);
// 	printf("%s\n", str1);
// }