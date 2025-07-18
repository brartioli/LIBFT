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

#include	<stddef.h>
#include	<string.h>
#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			 i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	
	return(dest);
}
#include	<stdio.h>
int main(void)
{
	char src[] = "Hello";
	char dest[8];
	char dest1[8];
	ft_memmove(dest, src, 5);
	dest[3] = '\0';
	printf("%s\n", dest);
	memmove(dest1, src, 5);
	dest1[3] = '\0';
	printf("%s\n", dest1);
	return (0);
}