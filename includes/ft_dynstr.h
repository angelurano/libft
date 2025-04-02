/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:43:44 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/02 20:56:39 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DYNSTR_H
# define FT_DYNSTR_H

# define DEFAULTCAPACITY 10

# include <stddef.h>
# include <stdlib.h>
# include "libft.h"

/**
 * @param capacity The maximum number of characters with null terminator
*/
typedef struct s_dynstr
{
	size_t	size;
	size_t	capacity;
	char	*data;
}	t_dynstr;

t_dynstr	*ft_dynstrnew(void);
t_dynstr	*ft_dynstrinit(size_t initial_capacity);

int			ft_dynstrresize(t_dynstr *dyn, size_t new_capacity);

int			ft_dynstradd(t_dynstr *dyn, char el);
int			ft_dynstrjoin(t_dynstr *dyn, const char *str);

void		ft_dynstrfree(t_dynstr **dyn);

#endif
