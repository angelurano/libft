/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:26:20 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 22:49:25 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

int	ft_perror(int errnum, const char *arg)
{
	if (errnum == 0 && arg == NULL)
	{
		ft_printf_error("unknown error\n");
		return (errnum);
	}
	if (errnum != 0)
	{
		if (arg != NULL)
		{
			ft_printf_error("%s: %s\n", strerror(errnum), arg);
			return (errnum);
		}
		ft_printf_error("%s\n", strerror(errnum));
		return (errnum);
	}
	ft_printf_error("%s\n", arg);
	return (errnum);
}
