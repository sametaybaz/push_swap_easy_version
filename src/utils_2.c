/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:28:42 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 16:29:09 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*sort_arr(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

int	*do_copy_arr(int *array, int *copy_array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		copy_array[i] = array[i];
		i++;
	}
	return (copy_array);
}

int	*do_arr(t_push *a, int *array)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		array[i] = a->number;
		a = a->next;
		i++;
	}
	return (array);
}

int	index_chr(int *sorted_array, int num)
{
	int	i;

	i = 0;
	while (sorted_array[i] != num)
		i++;
	return (i);
}

void	do_index(t_push **a, int size)
{
	t_push	*tmp;
	int		i;
	int		*array;
	int		*copy_array;

	i = 0;
	tmp = *a;
	array = malloc(sizeof(int) * (size + 1));
	copy_array = malloc(sizeof(int) * (size + 1));
	if (!array || !copy_array)
		return ;
	array = do_arr(tmp, array);
	copy_array = do_copy_arr(array, copy_array, size);
	array = sort_arr(array, size);
	while (tmp != NULL)
	{
		tmp->index = index_chr(array, copy_array[i]);
		tmp = tmp->next;
		i++;
	}
	free(array);
	free(copy_array);
}
