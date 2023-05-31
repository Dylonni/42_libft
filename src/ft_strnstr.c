/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:41:46 by dylan             #+#    #+#             */
/*   Updated: 2023/05/31 15:54:00 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Searches for the first occurence of the string little inside the string big
for the first n bytes.
Returns NULL if nothing is found
Returns the occurence of little in big if it's been found
Returns big if little is an empty string*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (big == NULL && len == 0)
		return (NULL);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
