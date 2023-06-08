/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:27:35 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 16:56:50 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_push **a, t_push **b, int size)
{
	if (2 <= size && size <= 5)
	{
		if (size == 2)
			do_sort_2(a);
		else if (size == 3)
			do_sort_3(a);
		else if (size == 4 || size == 5)
			do_sort_5(a, b, size);
	}
	if (6 <= size)
	{
		do_index(a, size);
		if (6 <= size && size <= 100)
			do_sort_100(a, b);
		else
			do_sort_500(a, b);
	}
}
