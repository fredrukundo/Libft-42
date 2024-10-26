/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:33:50 by frukundo          #+#    #+#             */
/*   Updated: 2024/10/26 04:40:38 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*array;
	// overflow protection for calloc
	size_t fred;
        fred = num_elements * size;
        if (fred != 0 && fred / num_elements != size )
        {
          printf("error");
          return (NULL);
        }
	array = (void *)malloc(num_elements * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (num_elements * size));
	return (array);
}

// testing
int main()
{
 ft_calloc(10000000000,SIZE_MAX);
 return 0;
}
