/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarrfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:45:50 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 05:08:18 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

t_dynarr	*ft_dynarrfree(t_dynarr **dyn, void (*del)(void *))
{
	if (dyn == NULL || *dyn == NULL)
		return (NULL);
	if ((*dyn)->data != NULL)
	{
		if (del != NULL)
			ft_dynarrclear(*dyn, del);
		free((*dyn)->data);
		(*dyn)->data = NULL;
	}
	free(*dyn);
	*dyn = NULL;
	return (NULL);
}
