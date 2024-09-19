/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:14:37 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/19 22:20:37 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

static void	test_ft_isalpha(void)
{
	assert(ft_isalpha('a') == 1 && "Check if 'a' is an alpha character");
	assert(ft_isalpha('1') == 0 && "Check if '1' is not an alpha character");
}

int	main(void)
{
	test_ft_isalpha();
}
