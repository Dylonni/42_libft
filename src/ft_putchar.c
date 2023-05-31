/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:04:22 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 15:03:20 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Will write the character in the terminal (Only for ft_printf function !)*/
void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}
