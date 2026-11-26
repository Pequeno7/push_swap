/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26                                  */
/*   Updated: 2026/11/26                                  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_stack(t_stack **stack, char name)
{
	t_stack	*first;
	t_stack	*second;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (name == 'a')
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}

void	push_stack(t_stack **src, t_stack **dst, char name)
{
	t_stack	*node;

	if (!*src)
		return ;
	node = *src;
	*src = node->next;
	node->next = *dst;
	*dst = node;
	if (name == 'a')
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}

void	rotate_stack(t_stack **stack, char name)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	if (name == 'a')
		write(1, "ra\n", 3);
	else
		write(1, "rb\n", 3);
}

void	reverse_rotate_stack(t_stack **stack, char name)
{
	t_stack	*last;
	t_stack	*before;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		before = last;
		last = last->next;
	}
	before->next = NULL;
	last->next = *stack;
	*stack = last;
	if (name == 'a')
		write(1, "rra\n", 4);
	else
		write(1, "rrb\n", 4);
}
