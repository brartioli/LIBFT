/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:15:44 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/18 14:24:21 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL || src == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include	<stdio.h>
// int main(void)
// {
// 	char src[] = "Hello";
// 	char dest[8];
// 	ft_memcpy(dest, src, 1);
// 	dest[1] = '\0';
// 	printf("%s\n", dest);
// 	return (0);
// }