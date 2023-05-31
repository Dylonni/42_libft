/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:07:34 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 17:38:14 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Checks if the given char is a space (or tab), returns 1 if it is*/
static	int	ft_isspace(char c)
{
	if ((c == ' ') || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

/*Checks if the given char is a negative sign, returns sign -= 1 if it is*/
static	int	ft_signhandle(char c, int sign)
{
	if (c == '-')
		sign *= -1;
	return (sign);
}

/*Ascii TO Int: get a number as string as an input and transform it into
 numbers (int)*/
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;
	int		count;

	i = 0;
	res = 0;
	count = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign = ft_signhandle(str[i], sign);
		count++;
		i++;
	}
	if (count > 1)
		return (0);
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
