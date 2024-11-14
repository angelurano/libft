/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_errno.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:28:26 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 00:54:55 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

int	ft_perrno(const char *arg)
{
	int	errnum;

	errnum = errno;
	ft_perror(errnum, arg);
	return (errnum);
}
