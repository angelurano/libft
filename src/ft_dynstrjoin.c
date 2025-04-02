/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstrjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:48:24 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/02 20:59:58 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

static size_t	get_new_capacity(t_dynstr *dyn, size_t str_len)
{
	size_t	new_capacity;

	if (dyn->capacity == 0)
	{
		if (DEFAULTCAPACITY > 1)
			new_capacity = DEFAULTCAPACITY;
		else
			new_capacity = 2;
	}
	new_capacity = dyn->capacity;
	while (dyn->size + str_len >= new_capacity)
		new_capacity *= 2;
	return (new_capacity);
}

int	ft_dynstrjoin(t_dynstr *dyn, const char *str)
{
	size_t	i;
	size_t	str_len;

	if (str == NULL)
		return (0);
	str_len = ft_strlen(str);
	if (dyn->size + str_len >= dyn->capacity)
		if (!ft_dynstrresize(dyn, get_new_capacity(dyn, str_len)))
			return (0);
	i = 0;
	while (i < str_len)
	{
		dyn->data[dyn->size + i] = str[i];
		i++;
	}
	dyn->data[dyn->size + i] = '\0';
	dyn->size += str_len;
	return (1);
}
