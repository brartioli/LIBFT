/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:57:34 by bfernan2          #+#    #+#             */
/*   Updated: 2025/07/26 11:57:34 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;

   if (!s)
    return (NULL);
   if (start > ft_strlen(s))
        return (ft_strdup(""));
   if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
   str = malloc((len + 1) * sizeof(char));
   if (!str)
    return (NULL);
   ft_memcpy(str, &s[start], len);
   str[len] = '\0';
   return (str);

}
#include <stdio.h>
int main (void)
{
    char const str[] = "0123456789";
    unsigned start = 2;
    printf("%s", ft_substr(str, start, 3));
}