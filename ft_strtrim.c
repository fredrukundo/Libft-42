/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:26:35 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/10 23:15:05 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_char_in_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_char_in_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	str = (char *)malloc(size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1, size + 1);
	return (str);
}
