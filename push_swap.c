/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:26:51 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 14:47:38 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_push **a, int num)
{
	t_push	*tmp;

	tmp = malloc(sizeof(t_push));
	if (!tmp)
		return ;
	tmp->number = num;
	tmp->next = *a;
	*a = tmp;
}

int	main(int argc, char *argv[])
{
	t_push	*a;
	t_push	*b;
	int		size;
	int		num;

	a = NULL;
	b = NULL;
	size = argc - 1;
	if (argc > 1)
	{
		while (argc != 1)
		{
			num = ft_atoi(argv[--argc]);
			push_a(&a, num);
		}
	}
	if (a != NULL && size > 0)
	{
		check_rep(&a);
		if (!is_sorted(&a))
			sort(&a, &b, size);
		free(a);
	}
	return (0);
}
