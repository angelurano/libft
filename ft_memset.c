/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:06:33 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/17 22:10:41 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (s == NULL)
		return (s);
	p = (unsigned char *)s;
	i = 0;
	while (p[i] && i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
