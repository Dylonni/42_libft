/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlei.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:59:34 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 13:53:05 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Writes INT_MIN if the given int == INT_MIN (Only for ft_printf function !)*/
int	ismin(int nb, int *count)
{
	ft_putstr("-2", count);
	nb = 147483648;
	return (nb);
}

/*Writes the '-' if the given int is negative (Only for ft_printf function !) */
int	isneg(int nb, int *count)
{
	ft_putchar('-', count);
	return (-nb);
}

/*Writes any given int into terminal (Only for ft_printf function !)*/
void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
		nb = ismin(nb, count);
	if (nb < 0)
		nb = isneg(nb, count);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
	else
		ft_putchar((nb + '0'), count);
}
