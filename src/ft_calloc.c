/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:49:05 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 13:45:36 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Allocates memory and returns a pointer, sets the memory to 0 (unlike malloc)*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (nmemb && (nmemb * size / nmemb) != size)
		return (NULL);
	if (size == 0 || nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	ptr = (unsigned char *)malloc(size * nmemb);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, (size * nmemb));
	return (ptr);
}
