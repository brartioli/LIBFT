/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:36:30 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/30 17:44:46 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	count_word(char const *s, char c)
{
	int	sub;
	int	i;

	sub = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			sub++;
		i++;
	}
	return (sub);
}

static int	len_word(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static void	free_split(char **split, int filled)
{
	int	i;

	i = 0;
	while (i < filled)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	str = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_word(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, len_word(s, c, i));
		if (!str[j])
		{
			free_split(str, j);
			return (NULL);
		}
		i += len_word(s, c, i);
		j++;
	}
	str[j] = NULL;
	return (str);
}
// #include <stdio.h>
// int main()
// {
//     char    str[] = "      split       this for   me  !       ";
//     char    c = ' ';
// 	char	**res = ft_split(str, c);
// 	int i = 0;
//     while (res[i])
// 	{
// 		printf("'%s'\n", res[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (res[i])
// 	{
// 		free(res[i++]);
// 	}
// 	free(res);
// 	return (0);
// }