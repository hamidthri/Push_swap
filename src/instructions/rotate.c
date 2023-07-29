/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:59:06 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/25 13:04:20 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_list(t_list **list, int is_a)
{
	t_list	*first;
	t_list	*new_h;

	if (is_a == 1)
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
	if ((*list) == NULL || (*list)->next == NULL)
		return ;
	new_h = (*list)->next;
	first = *list;
	while ((*list)->next != NULL)
		*list = (*list)->next;
	(*list)->next = first;
	first->next = NULL;
	*list = new_h;
}

void	reverse_rotate_list(t_list **list, int is_a)
{
	t_list	*first;
	t_list	*new_h;

	if (is_a == 1)
		ft_printf("rra\n");
	else
		ft_printf("rrb\n");
	if ((*list) == NULL || (*list)->next == NULL)
		return ;
	first = *list;
	new_h = (*list)->next;
	while (new_h->next != NULL)
	{
		new_h = new_h->next;
		*list = (*list)->next;
	}
	new_h->next = first;
	(*list)->next = NULL;
	*list = new_h;
}
