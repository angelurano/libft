/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:14:37 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/21 09:56:21 by migugar2         ###   ########.fr       */
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

static void	test_ft_isdigit(void)
{
	assert(ft_isdigit('1') == 1 && "Check if '1' is a digit");
	assert(ft_isdigit('a') == 0 && "Check if 'a' is not a digit");
}

static void	test_ft_isalnum(void)
{
	assert(ft_isalnum('1') == 1 && "Check if '1' is an alphanumeric character");
	assert(ft_isalnum('a') == 1 && "Check if 'a' is an alphanumeric character");
	assert(ft_isalnum(' ') == 0 && "Check if ' ' is not an alphanumeric character");
}

static void	test_ft_isascii(void)
{
	assert(ft_isascii(0) == 1 && "Check if 0 is an ascii character");
	assert(ft_isascii('a') == 1 && "Check if 'a' is an ascii character");
	assert(ft_isascii(128) == 0 && "Check if 128 is not an ascii character");
}

static void	test_ft_isprint(void)
{
	assert(ft_isprint(0) == 0 && "Check if 0 is not a printable character");
	assert(ft_isprint('-') == 1 && "Check if '-' is a printable character");
	assert(ft_isprint(128) == 0 && "Check if 128 is not a printable character");
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
}
