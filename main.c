/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:53:19 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/29 15:46:59 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	finish(t_list **sa, t_list **sb)
{
	if (sa && *sa)
		ft_lstclear(sa);
	if (sb && *sb)
		ft_lstclear(sb);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list		*sa;
	t_list		*sb;
	char		**sp;

	sb = NULL;
	if (argc < 2)
		return (0);
	sp = validating(argc, argv);
	if (!sp)
		return (1);
	if (is_sorted(sp))
	{
		mem_free(count_words(sp), sp);
		return (0);
	}
	sa = createlinkedlist(sp);
	if (ft_lstsize(sa) == 2)
		swap_list(&sa, 1);
	else if (ft_lstsize(sa) == 3)
		sort_3(&sa, 1);
	else if (ft_lstsize(sa) <= 5)
		sort_5(&sa, &sb);
	else
		sort_bigger(&sa, &sb);
	return (finish(&sa, &sb));
}
