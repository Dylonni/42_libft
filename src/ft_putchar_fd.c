/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:38:25 by daumis            #+#    #+#             */
/*   Updated: 2023/05/31 15:02:36 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Writes a character in the given fd (Ex: 1 will write the char in terminal)*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
