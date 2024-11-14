/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_errno.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:33:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 00:57:32 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft_errors.h"

int	set_errno(int errnum)
{
	errno = errnum;
	return (errnum);
}
