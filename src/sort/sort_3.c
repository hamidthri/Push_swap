/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:15:27 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/25 12:48:36 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3(t_list **list, int is_a)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = *list;
	b = a->next;
	c = b->next;
	if ((a->content > b->content) && (b->content > c->content))
	{
		swap_list(list, is_a);
		reverse_rotate_list(list, is_a);
	}
	else if ((b->content > c->content) && (c->content > a->content))
	{
		reverse_rotate_list(list, is_a);
		swap_list(list, is_a);
	}
	else if ((c->content > a->content) && (a->content > b->content))
		swap_list(list, is_a);
	else if ((a->content > c->content) && (c->content > b->content))
		rotate_list(list, is_a);
	else if ((b->content > a->content) && (a->content > c->content))
		reverse_rotate_list(list, is_a);
}
