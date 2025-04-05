/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarrnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 03:26:10 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 03:26:58 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynarr.h"

t_dynarr	*ft_dynarrnew(size_t element_size)
{
	if (DEFAULTCAPACITY > 0)
		return (ft_dynarrinit(DEFAULTCAPACITY, element_size));
	return (ft_dynarrinit(1, element_size));
}
