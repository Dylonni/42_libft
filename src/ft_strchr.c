/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:24:28 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 15:17:22 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Searches for the int c in the given string s, returns the occurence if found*/
char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s)
		{
			if (*s == (unsigned char)c)
				return ((char *)s);
			s++;
		}
		if (*s == c)
			return ((char *)s);
	}
	return (NULL);
}
