/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:55:12 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/12/26 19:28:50 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP
#define PUSH_SWAP
#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

char			**ft_remove_spaces(int n, char **table);
char			*ft_join_free(char	*s1, char *s2);
void			ft_check_input(int n, char **table);
void			ft_isnumber(char *number);
void	 		ft_check_number_duplicate(int n, char **tab);
void			ft_check_input(int n, char **table);
void 			ft_print_error(char *err);
void			ft_check_overflow(char *a);
void			ft_parse_it(int n, char **v);
unsigned long	ft_atoi_long(const char *str);

void			swap(t_list_d **a, char *c);
void			push( t_list_d **a, t_list_d *b);
void			rotate(t_list_d **a, t_list_d *head, t_list_d *last,char *c);
void			reverse_rotate(t_list_d **a);
void			ft_del_one(t_list_d **lst, int a);

#endif