/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:34:02 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/29 12:21:16 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../lib/libft/libft.h"
# include "../lib/ft_printf/ft_printf.h"
# define INT_MAX	2147483647
# define INT_MIN	-2147483648

// -----------Validating-------------
int			is_digit(char *args);
int			is_valid_integer(char **args);
int			is_sorted(char **args);
char		**validating(int argc, char **args);
int			is_uniqe(char **args);
char		**split_args(int argc, char **args);
// ----------instructions------------
void		reverse_rotate_list(t_list **list, int is_a);
void		swap_list(t_list **list, int is_a);
void		push_list(t_list **list_a, t_list **list_b, int from_a);
void		rotate_list(t_list **list, int is_a);
// ----------Sort--------------------
t_list		*createlinkedlist(char **args);
void		sort_3(t_list **list, int is_a);
void		sort_5(t_list **list_a, t_list **list_b);
void		insertion(t_list **sa);
void		sort_bigger(t_list **sa, t_list **sb);

// ----------Free Memory-------------
int			mem_free(int k, char **strings);
int			count_words(char **sp);

#endif