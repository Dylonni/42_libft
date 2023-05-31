/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:07:10 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 15:06:46 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Writes the string into terminal (Only for ft_printf function !)*/
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
