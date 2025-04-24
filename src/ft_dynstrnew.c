/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstrnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:07:13 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/24 02:18:40 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dynstr.h"

t_dynstr	*ft_dynstrnew(void)
{
	if (DYNSTR_DEFAULTCAPACITY > 0)
		return (ft_dynstrinit(DYNSTR_DEFAULTCAPACITY));
	return (ft_dynstrinit(2));
}
