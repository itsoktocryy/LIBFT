/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:36:56 by rzachara          #+#    #+#             */
/*   Updated: 2022/01/29 14:36:17 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// int main()
// {
//     char c;
//     char res;    
//     c = 'A';
//     res = ft_tolower(c);
//     printf("%d\n", res);
//     c = 'b';
//     res = ft_tolower(c);
//     printf("%d\n", res);
//     c = '1';
//     res = ft_tolower(c);
//     printf("%d\n", res);
//     c = '$';
//     res = ft_tolower(c);
//     printf("%d\n", res);
// }