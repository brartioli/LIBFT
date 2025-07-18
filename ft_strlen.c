/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:49:25 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/17 17:54:33 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// #include	<stdio.h>
// int main(void)
// {
// 	char *i;

// 	i = "Hello World";
// 	int res = ft_strlen(i);
// 	printf("%d\n",res);
// 	return(0);
// }