/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:24:13 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/22 19:11:31 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i++;
	while (i-- > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
	}
	return ((char *)0);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char str[]="aaaaabaa";
// 	char c = 'b';
// 	printf("%s\n", strrchr(str, c));
// 	printf("%s\n", ft_strrchr(str, c));
// }