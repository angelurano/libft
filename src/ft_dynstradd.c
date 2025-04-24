/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstradd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:38:22 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/24 02:18:13 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

static size_t	get_new_capacity(t_dynstr *dyn)
{
	if (dyn->capacity == 0)
	{
		if (DYNSTR_DEFAULTCAPACITY > 1)
			return (DYNSTR_DEFAULTCAPACITY);
		return (2);
	}
	return (dyn->capacity * 2);
}

int	ft_dynstradd(t_dynstr *dyn, char c)
{
	if (dyn->size + 1 >= dyn->capacity)
		if (!ft_dynstrresize(dyn, get_new_capacity(dyn)))
			return (0);
	dyn->data[dyn->size] = c;
	dyn->data[dyn->size + 1] = '\0';
	dyn->size++;
	return (1);
}
