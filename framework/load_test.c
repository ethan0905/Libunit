/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:13:11 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:13:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*new_test(char *name, int (*test)(void))
{
	t_unit_test	*list;

	if (!(list = (t_unit_test *)malloc(sizeof(t_unit_test))))
		return (NULL);
	list->name = name;
	list->test = test;
	list->next = NULL;
	return (list);
}

void		load_test(t_unit_test **testlist, char *name, int (*test)(void))
{
	t_unit_test	*tmp;

	if (*testlist == NULL)
		*testlist = new_test(name, test);
	else
	{
		tmp = *testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_test(name, test);
	}
}

