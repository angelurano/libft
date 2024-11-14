/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:26:20 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 00:55:02 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

int	ft_perror(int errnum, const char *arg)
{
	ft_print_fd(2, "%s: %s\n", strerror(errnum), arg);
	return (errnum);
}
