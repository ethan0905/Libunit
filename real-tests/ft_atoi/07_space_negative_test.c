/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_space_negative_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:51:18 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:51:24 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int	space_negative_test(void)
{
	if (ft_atoi("  -123") == -123)
		return (0);
	else
		return (-1);
}
