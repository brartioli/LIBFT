/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:18:01 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/22 18:18:55 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	i = len_dest;
	j = 0;
	if (size == 0 || size <= len_dest)
	{
		return (size + len_src);
	}
	while (src[j] && j < size - len_dest - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
// #include <stdio.h>
// int main(void)
// {
// 	char dest[] = "123456";
// 	char src[] = "789";
// 	printf("%ld", ft_strlcat(dest, src, 8));
// }