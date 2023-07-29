/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:58:00 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/29 12:47:14 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*pop_top(t_list *list)
{
	t_list	*new_head;

	if (list == NULL)
		return (list);
	new_head = list->next;
	list = new_head;
	return (new_head);
}

void	push_list(t_list **list_a, t_list **list_b, int from_a)
{
	t_list			*top;

	if (from_a)
	{
		ft_printf("pb\n");
		if (*list_a == NULL)
			return ;
		top = *list_a;
		*list_a = pop_top(*list_a);
		top->next = *list_b;
		*list_b = top;
	}
	else
	{
		ft_printf("pa\n");
		if (*list_b == NULL)
			return ;
		top = *list_b;
		*list_b = pop_top(*list_b);
		top->next = *list_a;
		*list_a = top;
	}
}
