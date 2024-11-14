/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:24:15 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/13 12:44:33 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_putendl_fd(int fd, char *str)
{
	int	count;

	count = ft_putstr_fd(fd, str);
	count += ft_putchar_fd(fd, '\n');
	return (count);
}
