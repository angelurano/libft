/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarrinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 03:19:31 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 03:23:49 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

t_dynarr	*ft_dynarrinit(size_t initial_capacity, size_t element_size)
{
	t_dynarr	*dyn;

	if (initial_capacity <= 0)
		return (NULL);
	dyn = (t_dynarr *)malloc(sizeof(t_dynarr));
	if (dyn == NULL)
		return (NULL);
	dyn->data = (void *)malloc(initial_capacity * element_size);
	if (dyn->data == NULL)
		return (ft_free((void **)&dyn), NULL);
	dyn->size = 0;
	dyn->capacity = initial_capacity;
	dyn->element_size = element_size;
	return (dyn);
}
