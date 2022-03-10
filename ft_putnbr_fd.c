/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:37:33 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/05 16:24:11 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_neg(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
		ft_putchar_fd('-', fd);
	nbr = ft_neg(n);
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + 48, fd);
}

// int main()
// {
// 	unsigned int nbr = 1821;
// 	ft_putnbr_fd(nbr, fd);
// 	return (0);
// }