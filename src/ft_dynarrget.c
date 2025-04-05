/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarrget.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:29:27 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 10:29:42 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

void	*ft_dynarrget(t_dynarr *dyn, size_t index)
{
	if (index >= dyn->size)
		return (NULL);
	return ((char *)dyn->data + index * dyn->element_size);
}
