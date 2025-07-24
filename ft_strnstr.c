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

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	const char	*b;
	
	i = 0;
	b = (unsigned char *)big;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	if ()
	{

	}
}
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[25] = "Good Morning sunshine";
	char str1[] = "Morning";
	char *ptrstr;

	ptrstr = strnstr(str, str1);

	if (ptrstr)
	{
		printf("\n%c\n", *ptrstr);

	}else
	{
		printf("\nNull pointer");
	}
	return (0);
}