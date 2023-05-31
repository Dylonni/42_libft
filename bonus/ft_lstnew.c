/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:26:58 by daumis            #+#    #+#             */
/*   Updated: 2023/05/31 16:16:37 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Creates a new node and returns it , initializing node's content with the
given paramater*/
t_list	*ft_lstnew(void *content)
{
	t_list	*membre;

	membre = (t_list *)malloc(sizeof(t_list));
	if (!membre)
		return (0);
	membre->content = content;
	membre->next = 0;
	return (membre);
}
