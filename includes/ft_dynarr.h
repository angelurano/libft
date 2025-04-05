/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynarr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:28:14 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/05 10:29:00 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DYNARR_H
# define FT_DYNARR_H

# define DEFAULTCAPACITY 10

# include <stddef.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_dynarr
{
	size_t	size;
	size_t	capacity;
	size_t	element_size;
	void	*data;
}	t_dynarr;

t_dynarr	*ft_dynarrnew(size_t element_size);
t_dynarr	*ft_dynarrinit(size_t initial_capacity, size_t element_size);

int			ft_dynarrresize(t_dynarr *dyn, size_t new_capacity);

int			ft_dynarradd(t_dynarr *dyn, void *el);
void		*ft_dynarrget(t_dynarr *dyn, size_t index);

void		ft_dynarrclear(t_dynarr *dyn, void (*del)(void *));
t_dynarr	*ft_dynarrfree(t_dynarr **dyn, void (*del)(void *));

#endif
