/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:30:38 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/19 16:59:19 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	copy(char *dest_cpy, char *src_cpy, size_t n, int is_reverse)
{
	size_t	i;

	if (is_reverse)
	{
		i = -1;
		dest_cpy += n;
		src_cpy += n;
	}
	else
		i = 1;
	while (n != 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy += i;
		src_cpy += i;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_cpy;
	char	*dest_cpy;

	if (!dest || !src || n == 0)
		return (dest);
	src_cpy = (char *)src;
	dest_cpy = (char *)dest;
	if (dest_cpy < src_cpy || dest_cpy >= (src_cpy + n))
		copy(dest_cpy, src_cpy, n, 0);
	else
		copy(dest_cpy, src_cpy, n, 1);
	return (dest);
}
