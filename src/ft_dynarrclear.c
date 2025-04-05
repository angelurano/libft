/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarrclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:44:22 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 04:44:35 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

void	ft_dynarrclear(t_dynarr *dyn, void (*del)(void *))
{
	size_t	i;

	if (dyn == NULL || del == NULL)
		return ;
	i = 0;
	while (i < dyn->size)
	{
		del((char *)dyn->data + (i * dyn->element_size));
		i++;
	}
	dyn->size = 0;
}
