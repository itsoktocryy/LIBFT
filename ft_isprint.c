/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:23 by rzachara          #+#    #+#             */
/*   Updated: 2022/01/29 13:54:27 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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