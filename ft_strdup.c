/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:09:43 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/10 23:25:15 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	index;
	char	*dest;

	index = ft_strlen(src);
	dest = (char *)malloc(index * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, index);
	dest[index] = '\0';
	return (dest);
}
