/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:14:37 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/21 10:42:48 by migugar2         ###   ########.fr       */
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

static void	test_ft_toupper(void)
{
	assert(ft_toupper('a') == 'A' && "Check if 'a' is converted to 'A'");
	assert(ft_toupper('A') == 'A' && "Check if 'A' remains 'A'");
	assert(ft_toupper('1') == '1' && "Check if '1' remains '1'");
}

static void	test_ft_tolower(void)
{
	assert(ft_tolower('A') == 'a' && "Check if 'A' is converted to 'a'");
	assert(ft_tolower('a') == 'a' && "Check if 'a' remains 'a'");
	assert(ft_tolower('1') == '1' && "Check if '1' remains '1'");
}

static void	test_ft_strlen(void)
{
	assert(ft_strlen("Hello") == 5 && "Check if 'Hello' has 5 characters");
	assert(ft_strlen("") == 0 && "Check if '' has 0 characters");
	assert(ft_strlen("1234567890") == strlen("1234567890") && "Check if '1234567890' is the same in ft_strlen and strlen");
}

static void	test_ft_strchr(void)
{
	assert(ft_strchr("Hello", 'e') == strchr("Hello", 'e') && "Check if 'e' is in 'Hello'");
	assert(ft_strchr("Hello", 'a') == NULL && "Check if 'a' is not in 'Hello'");
	assert(ft_strchr("Hello", 'a') == strchr("Hello", 'a') && "Check if 'a' is not in 'Hello'");
	assert(ft_strchr("Hello", '\0') == strchr("Hello", '\0') && "Check if '\0' is in 'Hello'");
}

static void	test_ft_strrchr(void)
{
	assert(ft_strrchr("Hello", 'l') == strrchr("Hello", 'l') && "Check if 'l' is in 'Hello'");
	assert(ft_strrchr("Hello", 'a') == NULL && "Check if 'a' is not in 'Hello'");
	assert(ft_strrchr("Hello", 'a') == strrchr("Hello", 'a') && "Check if 'a' is not in 'Hello'");
	assert(ft_strrchr("Hello", '\0') == strrchr("Hello", '\0') && "Check if '\0' is in 'Hello'");
}

static void	test_ft_strncmp(void)
{
	assert(ft_strncmp("Hello", "Hello", 5) == strncmp("Hello", "Hello", 5) && "Check if 'Hello' is the same in ft_strncmp and strncmp");
	assert(ft_strncmp("Hello", "Hello", 3) == strncmp("Hello", "Hello", 3) && "Check if 'Hel' is the same in ft_strncmp and strncmp");
	assert(ft_strncmp("World", "Hello", 1) == 15 && "Check if 'W' is truly exactly 15 greater than 'H'");
	assert(ft_strncmp("Hello", "Hello", 0) == strncmp("Hello", "Hello", 0) && "Check if '' is the same in ft_strncmp and strncmp");
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_tolower();
	test_ft_toupper();
	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();

	printf("All tests passed!\n");
}
