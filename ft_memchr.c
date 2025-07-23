/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:23:10 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/23 12:13:20 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		n--;
		p++;
	}
	return ((void *)0);
}
// #include <stdio.h>
// int main()
// {
//     char    str[7] = "Hello";
//     char    c = 'l';

//     printf("%s\n", (char *)memchr((void *)str, c, 10));
//     printf("%s", (char *)ft_memchr((void *)str, c, 10));
// }