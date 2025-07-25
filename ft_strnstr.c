/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:44:16 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/23 18:23:10 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	const char	*b;
	
	j = 0;
	b = (char *)big;
	while (little[j])
		j++;
	if (j == 0)
		return (b);
	while (*b && len > 0 && j <= len)
	{
		i = 0;
		while (little[i] == b[i] && little[i])
		{
			i++;
		}
		if (!little[i])
		{ 
			return (b);
		}
		len--;
		b++;
	}
	return ((char *)0);
	
}
#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "Good Morning sunshine";
	char str1[] = "Morning";
	printf("%s\n", ft_strnstr(str, str1, 13));
	return (0);
}