/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_plus_sign_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:49:35 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:49:54 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_atoi.h"

int	plus_sign_test(void)
{
	if (rt_atoi("+123") == 123)
		return (0);
	else
		return (-1);
}

