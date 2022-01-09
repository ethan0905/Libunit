/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_strcpy_test_ok.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:37:04 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:37:14 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_strcpy_tests.h"

int		basic_strcpy_test_ok(void)
{
	char	s1[10];
	char	*s2;

	ft_bzero(s1, 10);
	s2 = "Hello";
	if (ft_strequ(test_strcpy(s1, s2), "Hello"))
		return (0);
	else
		return (-1);
}

