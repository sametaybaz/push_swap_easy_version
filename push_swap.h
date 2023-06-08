/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:29:33 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 18:06:05 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_push
{
	int				number;
	int				index;
	struct s_push	*next;
}	t_push;

void	sa(t_push **list_a);
void	sb(t_push **list_b);
void	ra(t_push **list_a);
void	rb(t_push **list_b);
void	rra(t_push **list_a);
void	rrb(t_push **list_b);
void	ss(t_push **list_a, t_push **list_b);
void	rr(t_push **list_a, t_push **list_b);
void	rrr(t_push **list_a, t_push **list_b);
void	pa(t_push **list_a, t_push **list_b);
void	pb(t_push **list_a, t_push **list_b);
void	do_error(void);
void	do_sort_3(t_push **a);
void	do_sort_2(t_push **a);
void	do_index(t_push **a, int size);
void	do_sort_5(t_push **a, t_push **b, int size);
void	do_sort_pa(t_push **a, t_push **b);
void	check_rep(t_push **a);
void	do_sort_100(t_push **a, t_push **b);
void	do_sort_500(t_push **a, t_push **b);
void	sort(t_push **a, t_push **b, int count);
int		ft_atoi(char *c);

int		minnum(t_push **a);
int		maxnum(t_push **a);
int		maxindex(t_push **a);

int		lst_size(t_push **a);
int		is_sorted(t_push **a);
int		min_pos(t_push **a, int med, int i);
int		max_pos(t_push **a, int med, int i);
#endif