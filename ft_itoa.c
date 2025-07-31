/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:48:46 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/31 15:05:01 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	total_size(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		sign;
	int		size;

	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	size = total_size(n);
	if (n < 0)
	{
		sign = -sign;
		size++;
	}
	ptr = malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[size--] = 0;
	while (n != 0)
	{
		ptr[size--] = n % 10 * sign + 48;
		n /= 10;
	}
	if (size == 0)
		ptr[0] = '-';
	return (ptr);
}
//  #include 	<stdio.h>
//  int main()
// {
// 	printf("%s", ft_itoa(325));
// }