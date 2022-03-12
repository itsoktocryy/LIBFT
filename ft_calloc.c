/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzachara <rzachara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:08:03 by rzachara          #+#    #+#             */
/*   Updated: 2022/03/12 13:03:59 by rzachara         ###   ########.fr       */
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
//    int i, n;
//    int *a;
//    printf("Number of elements to be entered:");
//    scanf("%d",&n);
//    a = (int*)ft_calloc(n, sizeof(int));
//    printf("Enter %d numbers:\n",n);
//    for( i=0 ; i < n ; i++ )
//       scanf("%d",&a[i]);
//    printf("The numbers entered are: ");
//    for( i=0 ; i < n ; i++ )
//       printf("%d ",a[i]);
//    free( a );
//    return(0);
// }