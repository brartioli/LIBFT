/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:57:34 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/28 12:50:22 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size_len;

	size_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= size_len)
		return (ft_strdup(""));
	if (len > size_len - start)
		len = size_len - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
#include <stdio.h>
int main ()
{
    char const str[] = "0123456789";
    unsigned start = 2;
	char *res = ft_substr(str, start, 3);
	if (!res)
	{
		printf("Error\n");
		return (1);
	}
	printf("%s\n", res);
	free(res);
	return (0);
}