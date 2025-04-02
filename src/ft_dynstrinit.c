/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstrinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:01:23 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/02 21:08:19 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

t_dynstr	*ft_dynstrinit(size_t initial_capacity)
{
	t_dynstr	*dyn;

	dyn = (t_dynstr *)malloc(sizeof(t_dynstr));
	if (dyn == NULL)
		return (NULL);
	dyn->data = (char *)malloc(initial_capacity * sizeof(char));
	if (dyn->data == NULL)
		return (ft_free((void **)&dyn), NULL);
	dyn->size = 0;
	dyn->capacity = initial_capacity;
	dyn->data[0] = '\0';
	return (dyn);
}
