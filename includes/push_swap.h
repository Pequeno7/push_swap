/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26                                  #+#    #+#             */
/*   Updated: 2026/11/26                                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <errno.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		parse_args(int argc, char **argv, t_stack **stack);
int		stack_add_back(t_stack **stack, int value);
int		stack_size(t_stack *stack);
void	stack_clear(t_stack **stack);
void	assign_indices(t_stack *stack);
void	swap_stack(t_stack **stack, char name);
void	push_stack(t_stack **src, t_stack **dst, char name);
void	rotate_stack(t_stack **stack, char name);
void	reverse_rotate_stack(t_stack **stack, char name);
void	sort_stack(t_stack **a, t_stack **b);

#endif
