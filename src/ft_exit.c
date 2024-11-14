/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:30:58 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 00:53:59 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

int	ft_exit(int status, int errnum, const char *arg)
{
	ft_perror(errnum, arg);
	exit(status);
	return (status);
}
