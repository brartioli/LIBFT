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
	size_t	little_t;
	
	if (!little[0])
		return ((char *)big);
		
}