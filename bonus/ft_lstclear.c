/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:47:47 by daumis            #+#    #+#             */
/*   Updated: 2023/05/31 16:10:44 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Deletes a node content and all of the next ones*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst && *lst && del)
	{
		while ((*lst)->next != NULL)
		{
			del((*lst)->content);
			(temp) = (*lst);
			(*lst) = (*lst)->next;
			free(temp);
		}
		del((*lst)->content);
		free(lst[0]);
		lst[0] = NULL;
	}
}
