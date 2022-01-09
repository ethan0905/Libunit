/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:14:40 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:14:59 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>
# include <stdio.h>
# include "./libft/includes/libft.h"

# define TIMEOUT_SECONDS 3

typedef struct			s_unit_test
{
	char				*name;
	int					(*test)(void);
	struct s_unit_test	*next;
}						t_unit_test;

int						launch_tests(t_unit_test **tests);
void					load_test(t_unit_test **tests, char *name,
							int (*test)(void));
void					clean_list(t_unit_test **ptr);
int						stdout_to_pipe(int *fd_pipe);
char					*get_pipe_buffer(int stdout_copy, int *fd_pipe,
							char *buff, size_t size);

#endif
