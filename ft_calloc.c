/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:08:03 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/15 01:23:54 by rzachara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	sum;
	size_t	x;

	sum = count * size;
	dst = malloc(sum);
	if (!dst)
		return (NULL);
	x = 0;
	while (x < sum)
	{
		dst[x] = '\0';
		x++;
	}
	return ((void *)dst);
}

// int main()
// {
// 	int count;
// 	char *nbr;
// 	char *loc;
// 	int x;
// 	x = 0;
// 	printf("Number of elements to be entered:");
// 	scanf("%d",&count);
// 	loc = (char*)ft_calloc(count, sizeof(char));
// 	printf("Enter %d numbers:\n",count);
// 	while (x < count)
// 	{
// 		scanf("%c",nbr[x]);
// 		x++;	
// 	}
// 	printf("The numbers entered are: ");
// 	x = 0;
// 	while (x < count)
// 	{
// 		printf("%c ", nbr[x]);
// 		x++;
// 	}
// 	free(loc);
// 	return (0);
// }