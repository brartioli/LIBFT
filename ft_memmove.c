/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:44:38 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/18 14:49:46 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;

	if (src == dest)
	{
		return (dest);
	}
	if (src > dest)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
		return (dest);		
	}
	s += n - 1;
	d += n - 1;
	while (n > 0)
	{
		*d-- = *s--;
		n--;
	}
	return (dest);
}
#include	<stdio.h>
int main(void)
{
	const char src[] = "Hello";
	char dest[] = "World";
	ft_memmove(dest, src,  sizeof(src));
	printf("%s", dest, src, sizeof(src));
}