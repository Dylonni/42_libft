/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:46:52 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 13:44:31 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Erases data in the given pointer for n bytes, replacing memory by '\0'*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pstr;

	pstr = (unsigned char *)s;
	while (n > 0)
	{
		*pstr++ = '\0';
		n--;
	}
}
