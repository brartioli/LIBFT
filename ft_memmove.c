/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:44:38 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/21 16:28:14 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (src == dst)
		return (dst);
	if (src > dst)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
		return (dst);
	}
	s += n - 1;
	d += n - 1;
	while (n > 0)
	{
		*d-- = *s--;
		n--;
	}
	return (dst);
}
// #include	<stdio.h>
// int main(void)
// {
// 	const char src[] = "Hello";
// 	char dst[] = "World";
// 	ft_memmove(dest, src,  sizeof(src));
// 	printf("%s\n", dst);
// }