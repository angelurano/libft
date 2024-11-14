/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str_trimatrix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:34:20 by migugar2          #+#    #+#             */
/*   Updated: 2024/10/24 21:31:06 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	***ft_free_str_trimatrix(char ***matrix)
{
	size_t	i;
	size_t	j;

	if (matrix != NULL)
	{
		i = 0;
		while (matrix[i] != NULL)
		{
			j = 0;
			while (matrix[i][j] != NULL)
			{
				free(matrix[i][j]);
				j++;
			}
			free(matrix[i]);
			i++;
		}
		free(matrix);
	}
	return (NULL);
}
