/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:07:10 by dylan             #+#    #+#             */
/*   Updated: 2023/05/28 18:07:22 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr(const char *src, int *count)
{
	int	i;

	i = 0;
	if (!src)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (src[i])
	{
		ft_putchar(src[i], count);
		i++;
	}
}
