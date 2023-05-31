/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:02:52 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 14:14:55 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Sets memory for the given block with the given int (Ex : 0)*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pstr;
	size_t			i;

	pstr = (unsigned char *)s;
	i = 0;
	while (n)
	{
		pstr[i] = c;
		i++;
		n--;
	}
	return (s);
}
