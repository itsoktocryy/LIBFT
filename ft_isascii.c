/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:30 by rzachara          #+#    #+#             */
/*   Updated: 2022/01/30 17:11:07 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main()
// {
//     char c;
//     char res;    
//     c = '$';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
//     c = 'G';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
//     c = '1';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
//     c = '3';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
// }