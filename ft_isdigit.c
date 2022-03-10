/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:45:01 by rzachara          #+#    #+#             */
/*   Updated: 2022/01/30 19:18:40 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
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