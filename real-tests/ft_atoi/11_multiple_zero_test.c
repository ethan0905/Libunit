/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_multiple_zero_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:54:08 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:54:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int	multiple_zero_test(void)
{
	if (ft_atoi("000") == 0)
		return (0);
	else
		return (-1);
}
