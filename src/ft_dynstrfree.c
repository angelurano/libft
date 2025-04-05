/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstrfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:54:47 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 03:17:22 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

t_dynstr	*ft_dynstrfree(t_dynstr **dyn)
{
	if (dyn == NULL || *dyn == NULL)
		return (NULL);
	if ((*dyn)->data != NULL)
		free((*dyn)->data);
	free(*dyn);
	*dyn = NULL;
	return (NULL);
}
