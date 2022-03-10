/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:49 by rzachara          #+#    #+#             */
/*   Updated: 2022/02/03 21:13:17 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int main()
// {
//     char c;
//     char res;    
//     c = '$';
//     res = ft_isalpha(c);
//     printf("%d\n", res);
//     c = 'G';
//     res = ft_isalpha(c);
//     printf("%d\n", res);
//     c = '1';
//     res = ft_isalpha(c);
//     printf("%d\n", res);
//     c = '3';
//     res = ft_isalpha(c);
//     printf("%d\n", res);
// }