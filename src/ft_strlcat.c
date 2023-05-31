/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:16:19 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 15:38:48 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Concatenate the string src to the end of dest and terminates by '\0'.
Returns a length*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	if ((dst == NULL) && size == 0)
		return (src_len);
	while (dst[j] && j < size)
		j++;
	if (size <= i)
		return (src_len + j);
	while (src[i] && ((j + i) < size - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != size)
		dst[j + i] = '\0';
	return (j + src_len);
}
