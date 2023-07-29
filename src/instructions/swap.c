/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:03:27 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/17 20:05:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_list(t_list **list, int is_a)
{
	t_list	*first;
	t_list	*second;

	if (is_a == 1)
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
	if ((*list) == NULL || (*list)->next == NULL)
		return ;
	first = *list;
	second = (*list)->next;
	first->next = second->next;
	second->next = first;
	*list = second;
}
