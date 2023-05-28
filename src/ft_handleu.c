/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:00:31 by dylan             #+#    #+#             */
/*   Updated: 2023/05/28 18:11:45 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbru(unsigned int nb, int *count)
{
	if (nb >= 10)
	{
		ft_putnbru(nb / 10, count);
		ft_putnbru(nb % 10, count);
	}
	else
		ft_putchar((nb + '0'), count);
}
