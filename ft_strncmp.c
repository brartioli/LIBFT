/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:17:49 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/25 18:28:03 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > 0 && (*p1 || *p2))
	{
		if (*p1 != *p2)
		{
			return ((int)*(p1) - (int)*(p2));
		}
		n--;
		p1++;
		p2++;
	}
	return (0);
}
// #include	<stdio.h>
// #include	<string.h>
// int main ()
// {
// 	char str1[] = {"123456A"};
// 	char str2[] = {"123456"};
// 	int a;
// 	int b;
// 	a = ft_strncmp(str1, str2, 8);
// 	b = strncmp(str1, str2, 8);
// 	printf ("%d\n", a);
// 	printf("%d\n", b);
// }