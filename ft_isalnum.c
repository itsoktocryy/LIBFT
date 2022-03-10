/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:36 by rzachara          #+#    #+#             */
/*   Updated: 2022/01/30 17:10:24 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int main()
// {
//     char c;
//     char res;    
//     c = '$';
//     res = ft_isalnum(c);
//     printf("%d\n", res);
//     c = 'G';
//     res = ft_isalnum(c);
//     printf("%d\n", res);
//     c = '1';
//     res = ft_isalnum(c);
//     printf("%d\n", res);
//     c = '3';
//     res = ft_isalnum(c);
//     printf("%d\n", res);
// }