/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:51:15 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/21 16:44:02 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
// #include    <stdio.h>
// int main(void)
// {
//     int i;
//     i = 'a';
//     i = ft_toupper(i);
//     printf("%c", i);
//     return(0);
// }