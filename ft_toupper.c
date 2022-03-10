/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:04 by rzachara          #+#    #+#             */
/*   Updated: 2022/01/29 14:35:27 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// int main()
// {
//     char c;
//     char res;    
//     c = 'a';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
//     c = 'G';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
//     c = '1';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
//     c = '$';
//     res = ft_isdigit(c);
//     printf("%d\n", res);
// }