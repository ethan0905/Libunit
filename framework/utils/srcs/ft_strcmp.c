/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:30:54 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 19:31:18 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*t1;
// 	unsigned char	*t2;

// 	i = 0;
// 	t1 = (unsigned char *)s1;
// 	t2 = (unsigned char *)s2;
// 	while (n > 0 && (t1[i] != '\0' || t2[i] != '\0'))
// 	{
// 		if (t1[i] != t2[i])
// 			return (t1[i] - t2[i]);
// 		else
// 			i++;
// 		n--;
// 	}
// 	return (0);
// }
