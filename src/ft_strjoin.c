/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:14 by daumis            #+#    #+#             */
/*   Updated: 2023/05/28 18:14:04 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*pstr;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	size = (ft_strlen(s1) + ft_strlen(s2));
	pstr = malloc (size * sizeof(char) + 1);
	if (!pstr)
		return (0);
	while (s1 && s1[i])
	{
		pstr[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		pstr[i++] = s2[j++];
	pstr[i] = '\0';
	return (pstr);
}

char	*ft_strjoin_mod(char *s1, char *s2)
{
	char	*pstr;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	size = (ft_strlen(s1) + ft_strlen(s2));
	pstr = malloc (size * sizeof(char) + 1);
	if (!pstr)
		return (0);
	while (s1 && s1[i])
	{
		pstr[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		pstr[i++] = s2[j++];
	pstr[i] = '\0';
	free(s1);
	return (pstr);
}
