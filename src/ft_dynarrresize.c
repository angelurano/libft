/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarrresize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 03:27:40 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 03:32:24 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

int	ft_dynarrresize(t_dynarr *dyn, size_t new_capacity)
{
	void	*new_data;

	if (dyn == NULL || new_capacity <= 0)
		return (0);
	if (new_capacity <= dyn->capacity)
		return (1);
	new_data = (void *)malloc(new_capacity * dyn->element_size);
	if (new_data == NULL)
		return (0);
	if (dyn->data != NULL)
	{
		ft_memcpy(new_data, dyn->data, dyn->size * dyn->element_size);
		free(dyn->data);
		dyn->data = NULL;
	}
	dyn->data = new_data;
	dyn->capacity = new_capacity;
	return (1);
}
