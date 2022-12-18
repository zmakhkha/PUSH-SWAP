/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_list_d_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:15:18 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/12/18 18:21:37 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list_d	*ft_lstnew_d(int content)
{
	t_list_d	*new;

	new = (t_list_d *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	new -> prev = NULL;
	new -> position = 0;
	new -> index = 0;
	return (new);
}

void	ft_lstadd_front_d(t_list_d **lst, t_list_d *new)
{
	if (lst && new)
	{
		if (*lst)
			new ->next = *lst;
	}
	(*lst) = new;
}

t_list_d *ft_get_end_d(t_list_d *list)
{
	if (list)
	{
		while(list -> next)
			list = list ->next;
		return (list);
	}
	return (NULL);
}

void	ft_lstadd_back_d(t_list_d **lst, t_list_d *back)
{
	if (lst && back)
	{
			back -> prev = *lst;
			(*lst) -> next = back;
	}
}
