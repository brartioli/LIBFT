/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:11:41 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/23 17:42:03 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	int		i;

	c = malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (!c)
		return (NULL);
	while (s[i])
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
// #include	<stdio.h>
// #include	<string.h>
// int main()
// {
// 	char *src = "this is copy";
// 	char *cpy = ft_strdup(src);
// 	char *cpy1 = strdup(src);
// 	printf("mine = %s\n", cpy);
// 	printf("original = %s\n", cpy1);
// 	free(cpy);
// 	free(cpy1);
// 	return (0);
// }