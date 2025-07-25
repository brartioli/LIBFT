/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:55:58 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/21 17:40:41 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = dst;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}
// #include	<stdio.h>
// int main(void)
// {
// 	char str[8] = "He llo";
// 	char *str2 = ft_memset(str, '*', 3);
// 	printf("%s\n", str2);
// 	return (0);
// }