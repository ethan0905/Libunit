/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:14:02 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:14:14 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	clean_list(t_test **ptr)
{
	t_test	*buf[2];

	if (!ptr)
		return ;
	buf[1] = *ptr;
	while ((buf[0] = buf[1]))
	{
		buf[1] = buf[0]->next;
		free(buf[0]);
		buf[0] = NULL;
	}
	ptr = NULL;
}

