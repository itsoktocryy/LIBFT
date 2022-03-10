/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:36:07 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/04 15:57:16 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	x;

	if (!s)
		return ;
	x = 0;
	while (s[x])
	{
		ft_putchar_fd(s[x], fd);
		x++;
	}
}

// int main()
// {
// 	char str[] = "itsoktocryy";
// 	ft_putstr_fd(str, fd);
// 	return 0;
// }