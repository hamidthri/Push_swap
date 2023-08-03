/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:42:41 by htaheri           #+#    #+#             */
/*   Updated: 2023/08/01 17:11:15 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**split_args(int argc, char **args)
{
	int		k;
	char	*str;
	char	*temp1;
	char	*temp2;
	char	**sp;

	str = "";
	k = 1;
	while (k < argc)
	{
		temp1 = str;
		str = ft_strjoin(temp1, args[k++]);
		temp2 = str;
		str = ft_strjoin(temp2, " ");
		free (temp2);
		if (k > 2)
			free (temp1);
	}
	sp = ft_split(str, ' ');
	free (str);
	return (sp);
}
