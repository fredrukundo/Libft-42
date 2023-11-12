/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:33:50 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/10 23:05:53 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*array;

	array = (void *)malloc(num_elements * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (num_elements * size));
	return (array);
}
