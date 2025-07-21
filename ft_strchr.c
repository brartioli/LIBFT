/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:48:02 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/21 18:13:36 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
// #include <stdio.h>
// int main(void)
// {
// 	const char str[]= "Hello Word!";
// 	char *res = ft_strchr(str, 'd');
// 	char *res2 = strchr(str, 'd');
// 	if (res == NULL)
// 		printf("char not found\n");
// 	if (res2 == NULL)
// 		printf("char not found\n");
// 	else
// 	{
// 		printf("chat found at pos: %ld\n", res - str);
// 		printf("chat found at pos: %ld\n", res2 - str);	
// 	}
// 	return (0);
// }