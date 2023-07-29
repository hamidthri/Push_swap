/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:21:59 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/29 15:47:14 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*createlinkedlist(char **args)
{
	int		i;
	t_list	*head;
	t_list	*temp;
	t_list	*p;

	head = NULL;
	i = 0;
	while (args[i])
	{
		temp = (t_list *) malloc (sizeof(t_list));
		temp->content = ft_atoi(args[i++]);
		temp->next = NULL;
		if (head == NULL)
			head = temp;
		else
		{
			p = head;
			while (p->next != NULL)
				p = p->next;
			p->next = temp;
		}	
	}
	mem_free(count_words(args), args);
	insertion(&head);
	return (head);
}
