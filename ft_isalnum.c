/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:23:44 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/21 12:44:35 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// #include	<stdio.h>
// int main(void)
// {
// 	int i = 'r';
// 	int res = ft_isalnum(i);
// 	printf("%d\n",res);
// 	return(0);
// }
