/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:28:57 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/05 21:53:05 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

int	ft_atoi(char *c)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	while (c[i] != '\0')
	{	
		if (c[i] < '0' || c[i] > '9')
			do_error();
		nb = (nb * 10) + (c[i] - 48);
		i++;
	}
	if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
		do_error();
	return (nb * sign);
}

void	check_rep(t_push **a)
{
	t_push	*tmp1;
	t_push	*tmp2;

	tmp1 = *a;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		while (tmp2 != NULL)
		{
			if (tmp1->number == tmp2->number)
				do_error();
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}
