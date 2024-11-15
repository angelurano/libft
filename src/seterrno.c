/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seterrno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:33:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 23:08:43 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft_errors.h"

int	seterrno(int errnum)
{
	errno = errnum;
	return (errnum);
}
