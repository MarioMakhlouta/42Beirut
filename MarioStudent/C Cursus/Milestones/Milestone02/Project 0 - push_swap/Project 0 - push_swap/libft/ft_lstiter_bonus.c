/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:13:46 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/06/15 12:18:21 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstiter - Iterates over each node in a linked list and applies
 *              the given function to the content of each node.
 * @lst: Pointer to the first node of the linked list.
 * @f: Function pointer to a function that takes a void pointer as an
 *     argument and returns void. This function will be applied to the
 *     content of each node.
 *
 * Description: This function traverses a linked list starting from the
 *              node pointed to by 'lst' and applies the function 'f'
 *              to the content of each node. It uses a temporary pointer
 *              to iterate through the list and ensures the function
 *              stops if the list is empty.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	if (!lst)
		return ;
	list_ptr = lst;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}
