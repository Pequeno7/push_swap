/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26                                  */
/*   Updated: 2026/11/26                                  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static int	max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = stack_size(stack) - 1;
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	size;
	int	bits;

	if (is_sorted(*a))
		return ;
	size = stack_size(*a);
	bits = max_bits(*a);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				push_stack(a, b, 'b');
			else
				rotate_stack(a, 'a');
			j++;
		}
		while (*b)
			push_stack(b, a, 'a');
		i++;
	}
}
