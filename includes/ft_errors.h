/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:47:04 by migugar2          #+#    #+#             */
/*   Updated: 2024/11/14 00:53:28 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERRORS_H
# define FT_ERRORS_H

# include <errno.h>
# include <stdlib.h>
# include <string.h>
# include "ft_printf.h"

int	set_errno(int errnum);
int	ft_perror(int errnum, const char *arg);
int	ft_perrno(const char *arg);
int	ft_exit(int status, int errnum, const char *arg);

#endif
