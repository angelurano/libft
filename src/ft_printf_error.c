/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:40:41 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 22:47:33 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf_error(char const *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = ft_printfv_fd(STDERR_FILENO, format, args);
	va_end(args);
	return (count);
}
