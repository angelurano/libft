/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:59:23 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/17 20:37:08 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*r;

	r = NULL;
	p = (char *)s;
	while (*p)
	{
		if (*p == (char)c)
			r = p;
		p++;
	}
	if (c == 0)
		r = p;
	return (r);
}
