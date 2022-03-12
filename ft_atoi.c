/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:13 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 13:02:31 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_error(int neg)
{
	if (neg > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{	
	int					sign;
	int					count;
	size_t				x;
	long int		output;

	x = 0;
	sign = 1;
	output = 0;
	count = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == ' ')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x++] == '-')
			sign *= -1;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		output = output * 10 + str[x++] - 48;
			count++;
		if (count > 19)
			return (ft_error(sign));
	}
	return (output * sign);
}

// int main()
// {
//     printf("%d\n", ft_atoi("-9223372036854775807"));
// 	printf("%d\n", atoi("-9223372036854775807"));
// }