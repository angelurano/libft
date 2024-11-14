/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:21:44 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/13 12:29:50 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_putstr_fd(int fd, char *str)
{
	int		count;
	size_t	i;

	if (str == NULL)
		return (ft_putstr_fd(fd, "(null)"));
	count = 0;
	i = 0;
	while (str[i])
	{
		count += ft_putchar_fd(fd, str[i]);
		i++;
	}
	return (count);
}
