/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:40:41 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/13 12:51:29 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdarg.h>

int	ft_printf(char const *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = ft_printfv_fd(1, format, args);
	va_end(args);
	return (count);
}
