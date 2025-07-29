/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:05:57 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/29 16:58:19 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break ;
	}
	while (s1[i])
	{
		if (ft_strchr(set, s1[j]))
			j--;
		else
			break ;
	}
	return (ft_substr(s1, i, (j - i + 1)));
}
// #include <stdio.h>
// int main()
// {
// 	char	*ptr;
// 	ptr = ft_strtrim("* !Hi8! *", "* !");
// 	printf("%s", ptr);
// 	return (0);
// }