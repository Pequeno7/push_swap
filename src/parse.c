/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26                                  */
/*   Updated: 2026/11/26                                  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_duplicate(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

static int	parse_number(char *str, int *value)
{
	char	*end;
	long	number;

	if (!str || !*str)
		return (0);
	errno = 0;
	number = strtol(str, &end, 10);
	if (errno == ERANGE || *end || number < INT_MIN || number > INT_MAX)
		return (0);
	*value = (int)number;
	return (1);
}

int	parse_args(int argc, char **argv, t_stack **stack)
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		if (!parse_number(argv[i], &value) || is_duplicate(*stack, value))
			return (0);
		if (!stack_add_back(stack, value))
			return (0);
		i++;
	}
	return (1);
}
