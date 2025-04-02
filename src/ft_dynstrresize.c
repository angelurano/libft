/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstrresize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:32:58 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/02 20:54:13 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

int	ft_dynstrresize(t_dynstr *dyn, size_t new_capacity)
{
	char	*new_data;

	if (new_capacity == 0)
		return (1);
	new_data = (char *)malloc(new_capacity * sizeof(char));
	if (new_data == NULL)
		return (0);
	if (dyn->data != NULL)
	{
		ft_memcpy(new_data, dyn->data, dyn->size);
		ft_freestr(&dyn->data);
	}
	new_data[dyn->size] = '\0';
	dyn->data = new_data;
	dyn->capacity = new_capacity;
	return (1);
}
