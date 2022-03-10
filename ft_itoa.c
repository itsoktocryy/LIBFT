/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:28:51 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/04 16:07:23 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	size_t	i;

	i = ft_len(n);
	sign = 1;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = 0;
	i--;
	if (n < 0)
	{
		sign = sign * (-1);
		res[0] = '-';
	}
	if (n == 0)
		res[i] = '0';
	while (n != 0)
	{
		res[i] = ((n % 10) * sign) + 48;
		n = n / 10;
		i--;
	}
	return (res);
}

// int main()
// {
//     char *res;
//     res = ft_itoa(-182109);
//     printf("%s", res);
//     return (0);
// }