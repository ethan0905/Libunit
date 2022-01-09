/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:36:04 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 15:36:06 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/utils/includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
