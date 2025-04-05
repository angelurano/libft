/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarradd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:39:15 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 04:43:31 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

int	ft_dynarradd(t_dynarr *dyn, void *el)
{
	if (dyn == NULL || el == NULL)
		return (0);
	if (dyn->size >= dyn->capacity)
	{
		if (!ft_dynarrresize(dyn, dyn->capacity * 2))
			return (0);
	}
	ft_memcpy((char *)dyn->data + (dyn->size * dyn->element_size), el,
		dyn->element_size);
	dyn->size++;
	return (1);
}
