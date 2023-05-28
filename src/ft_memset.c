/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:02:52 by dylan             #+#    #+#             */
/*   Updated: 2023/05/28 17:56:53 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
