/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstrnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:07:13 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/02 20:50:03 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

t_dynstr	*ft_dynstrnew(void)
{
	if (DEFAULTCAPACITY > 0)
		return (ft_dynstrinit(DEFAULTCAPACITY));
	return (ft_dynstrinit(2));
}
