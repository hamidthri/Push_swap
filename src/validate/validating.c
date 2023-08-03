/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validating.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:49:37 by htaheri           #+#    #+#             */
/*   Updated: 2023/08/01 17:01:56 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**validating(int argc, char **argv)
{
	char	**sp;

	sp = split_args(argc, argv);
	if (*sp == NULL || !is_valid_integer(sp) || !is_uniqe(sp))
	{
		mem_free (count_words(sp), sp);
		ft_putendl_fd("Error", STDERR_FILENO);
		return (NULL);
	}
	return (sp);
}
