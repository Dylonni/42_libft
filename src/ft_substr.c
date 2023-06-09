/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 07:40:12 by daumis            #+#    #+#             */
/*   Updated: 2023/05/31 16:02:59 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*Extracts a new allocated string from the string s, starting at the given 
position and for a size of len*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pstr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	pstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!pstr)
		return (NULL);
	while (i < len)
	{
		pstr[i] = s[start];
		i++;
		start++;
	}
	pstr[i] = '\0';
	return (pstr);
}
