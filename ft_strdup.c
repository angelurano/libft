/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:58:41 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/19 19:06:57 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	l;
	size_t	i;

	l = ft_strlen(s);
	s_dup = malloc((l + 1) * sizeof(char));
	if (s_dup == NULL)
		return (s_dup);
	i = 0;
	while (i < l)
	{
		s_dup[i] = (char)s[i];
		i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}
