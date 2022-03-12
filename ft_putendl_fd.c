/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:56:37 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 13:51:52 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int main()
// {
// 	char str[] = {'H' ,'e' ,'l' ,'l' ,'o' ,' ' ,'w' ,'o' ,'r' ,'l' ,'d', '\n'};
// 	ft_putendl_fd(str);
// 	return 0;
// }