/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:00:31 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 13:55:00 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Like putnbr but only for unsigned int given (Only for ft_printf function !)*/
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
