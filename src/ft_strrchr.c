/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:08:16 by daumis            #+#    #+#             */
/*   Updated: 2023/05/31 15:55:47 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Same behavior as ft_strchr but searches in the string by starting at the end*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s) + 1;
	while (*s)
		s++;
	if (*s == c)
		return ((char *)s);
	while (slen > 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		slen--;
		s--;
	}
	return (NULL);
}
