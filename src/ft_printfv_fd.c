/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfv_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:40:41 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/13 12:51:11 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdarg.h>

static int	convert_format(int fd, char const *format, va_list args)
{
	int		count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar_fd(fd, va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr_fd(fd, va_arg(args, char *));
	else if (*format == 'p')
		count += ft_putptr_fd(fd, va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr_fd(fd, va_arg(args, int));
	else if (*format == 'u')
		count += ft_putnbru_fd(fd, va_arg(args, unsigned int));
	else if (*format == 'x')
		count += ft_putnbrhex_fd(fd, va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		count += ft_putnbrhex_fd(fd, va_arg(args, unsigned int), 1);
	else if (*format == '%')
		count += ft_putchar_fd(fd, '%');
	return (count);
}

int	ft_printfv_fd(int fd, char const *format, va_list args)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;
			count += convert_format(fd, &format[i], args);
		}
		else
			count += ft_putchar_fd(fd, format[i]);
		i++;
	}
	return (count);
}
