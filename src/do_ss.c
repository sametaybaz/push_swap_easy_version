/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:28:28 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 18:34:11 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push **list_a)
{
	int	first;
	int	second;

	first = (*list_a)->next->number;
	second = (*list_a)->number;
	(*list_a)->number = first;
	(*list_a)->next-> number = second;
	write(1, "sa\n", 3);
}

void	sb(t_push **list_b)
{	
	int	first;
	int	second;

	first = (*list_b)->next->number;
	second = (*list_b)->number;
	(*list_b)->number = first;
	(*list_b)->next->number = second;
	write(1, "sb\n", 3);
}

void	ss(t_push **list_a, t_push **list_b)
{
	sa(list_a);
	sb(list_b);
	write(1, "ss\n", 3);
}
