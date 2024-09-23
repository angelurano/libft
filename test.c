/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:14:37 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/23 21:08:26 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

static void	test_ft_isalpha(void)
{
	assert(ft_isalpha('a') == 1 && "Expected 'a' to be an alpha character");
	assert(ft_isalpha('Z') == 1 && "Expected 'Z' to be an alpha character");
	assert(ft_isalpha('1') == 0 && "Expected '1' to not be an alpha character");
	assert(ft_isalpha(200) == 0 && "Expected non-ASCII value 200 to not be an alpha character");
	assert(ft_isalpha('\t') == 0 && "Expected tab character to not be an alpha character");
}

static void	test_ft_isdigit(void)
{
	assert(ft_isdigit('1') == 1 && "Expected '1' to be a digit");
	assert(ft_isdigit('a') == 0 && "Expected 'a' to not be a digit");
	assert(ft_isdigit(0) == 0 && "Expected non-printable character 0 to not be a digit");
	assert(ft_isdigit('9') == 1 && "Expected '9' to be a digit");
}

static void	test_ft_isalnum(void)
{
	assert(ft_isalnum('1') == 1 && "Expected '1' to be an alphanumeric character");
	assert(ft_isalnum('a') == 1 && "Expected 'a' to be an alphanumeric character");
	assert(ft_isalnum(' ') == 0 && "Expected space character to not be an alphanumeric character");
	assert(ft_isalnum(0) == 0 && "Expected non-printable character 0 to not be an alphanumeric character");
}

static void	test_ft_isascii(void)
{
	assert(ft_isascii(0) == 1 && "Expected 0 to be an ASCII character");
	assert(ft_isascii('a') == 1 && "Expected 'a' to be an ASCII character");
	assert(ft_isascii(128) == 0 && "Expected 128 to not be an ASCII character");
	assert(ft_isascii(-1) == 0 && "Expected negative value -1 to not be an ASCII character");
}

static void	test_ft_isprint(void)
{
	assert(ft_isprint(32) == 1 && "Expected space character to be printable");
	assert(ft_isprint('a') == 1 && "Expected 'a' to be printable");
	assert(ft_isprint(127) == 0 && "Expected DEL character to not be printable");
	assert(ft_isprint(128) == 0 && "Expected non-ASCII value 128 to not be printable");
}

static void	test_ft_toupper(void)
{
	assert(ft_toupper('a') == 'A' && "Expected 'a' to be converted to 'A'");
	assert(ft_toupper('A') == 'A' && "Expected 'A' to remain 'A'");
	assert(ft_toupper('1') == '1' && "Expected '1' to remain '1'");
assert(ft_toupper(200) == 200 && "Expected non-ASCII value 200 to remain unchanged");
}

static void	test_ft_tolower(void)
{
	assert(ft_tolower('A') == 'a' && "Expected 'A' to be converted to 'a'");
	assert(ft_tolower('a') == 'a' && "Expected 'a' to remain 'a'");
	assert(ft_tolower('1') == '1' && "Expected '1' to remain '1'");
	assert(ft_tolower(200) == 200 && "Expected non-ASCII value 200 to remain unchanged");
}

static void	test_ft_strlen(void)
{
	assert(ft_strlen("Hello") == 5 && "Expected length of 'Hello' to be 5");
	assert(ft_strlen("") == 0 && "Expected length of empty string to be 0");
	assert(ft_strlen("1234567890") == strlen("1234567890") && "Expected length of '1234567890' to match with strlen");
}

static void	test_ft_strchr(void)
{
	assert(ft_strchr("Hello", 'e') == strchr("Hello", 'e') && "Expected 'e' to be in 'Hello' for ft_strchr and strchr");
	assert(ft_strchr("Hello", 'a') == NULL && "Expected 'a' to not be in 'Hello'");
	assert(ft_strchr("Hello", 'a') == strchr("Hello", 'a') && "Expected 'a' to not be in 'Hello'");
	assert(ft_strchr("Hello", '\0') == strchr("Hello", '\0') && "Expected '\\0' to be in 'Hello'");
}

static void	test_ft_strrchr(void)
{
	assert(ft_strrchr("Hello", 'l') == strrchr("Hello", 'l') && "Expected to find 'l' in 'Hello'");
	assert(ft_strrchr("Hello", 'a') == NULL && "Expected not to find 'a' in 'Hello'");
	assert(ft_strrchr("Hello", '\0') == strrchr("Hello", '\0') && "Expected to find '\\0' in 'Hello'");
}

static void	test_ft_strncmp(void)
{
	assert(ft_strncmp("Hello", "Hello", 5) == strncmp("Hello", "Hello", 5) && "Expected 'Hello' to match in both ft_strncmp and strncmp");
	assert(ft_strncmp("Hello", "Hellp", 4) == strncmp("Hello", "Hellp", 4) && "Expected first 4 characters to match in ft_strncmp and strncmp");
	assert(ft_strncmp("World", "Hello", 1) > 0 && "Expected 'W' to be greater than 'H'");
	assert(ft_strncmp("Hello", "Hello", 0) == 0 && "Expected comparison of length 0 to return 0");
}

static void	test_ft_memset(void)
{
	char *str1 = (char *)malloc(10);
	char *str2 = (char *)malloc(10);

	ft_memset(str1, 'a', 10);
	memset(str2, 'a', 10);
	assert(memcmp(str1, str2, 10) == 0 && "Expected memory regions to be equal after ft_memset and memset");
	assert(ft_memset(NULL, 'a', 0) == NULL && "Expected ft_memset with NULL and length 0 to return NULL");

	free(str1);
	free(str2);
}

static void	test_ft_bzero(void)
{
	char *str1 = (char *)malloc(10);
	char *str2 = (char *)malloc(10);

	ft_bzero(str1, 10);
	bzero(str2, 10);
	assert(memcmp(str1, str2, 10) == 0 && "Expected memory regions to be equal after ft_bzero and bzero");

	ft_bzero(NULL, 0);

	free(str1);
	free(str2);
}

static void	test_ft_memcpy(void)
{
	char *str1 = (char *)malloc(10);
	char *str2 = (char *)malloc(10);

	ft_memset(str1, 'a', 10);
	ft_memcpy(str2, str1, 10);
	assert(memcmp(str1, str2, 10) == 0 && "Expected memory regions to be equal after ft_memcpy and memcpy");

	assert(ft_memcpy(NULL, NULL, 0) == NULL && "Expected ft_memcpy with NULL and length 0 to return NULL");

	free(str1);
	free(str2);
}

static void	test_ft_memmove(void)
{
	char *str1 = (char *)malloc(10);
	char *str2 = (char *)malloc(10);

	ft_memset(str1, 'a', 10);
	ft_memmove(str2, str1, 10);
	assert(memcmp(str1, str2, 10) == 0 && "Expected memory regions to be equal after ft_memmove and memmove");

	char *overlap_test = (char *)malloc(20);
	ft_memset(overlap_test, 'a', 20);
	ft_memmove(overlap_test + 5, overlap_test, 10);
	assert(memcmp(overlap_test + 5, overlap_test, 10) == 0 && "Expected overlapping memory regions to handle correctly in ft_memmove");

	assert(ft_memmove(NULL, NULL, 0) == NULL && "Expected ft_memmove with NULL and length 0 to return NULL");

	free(str1);
	free(str2);
	free(overlap_test);
}

static void	test_ft_memchr(void)
{
	char *str1 = (char *)malloc(10);

	ft_memset(str1, 'a', 10);
	assert(ft_memchr(str1, 'a', 10) == memchr(str1, 'a', 10) && "Expected to find 'a' in memory for ft_memchr and memchr");
	assert(ft_memchr(str1, 'b', 10) == NULL && "Expected not to find 'b' in memory");
	assert(ft_memchr(NULL, 'a', 0) == NULL && "Expected NULL as input to return NULL");

	free(str1);
}

static void	test_ft_memcmp(void)
{
	char *str1 = (char *)malloc(10);
	char *str2 = (char *)malloc(10);

	ft_memset(str1, 'a', 10);
	memset(str2, 'a', 10);
	assert(ft_memcmp(str1, str2, 10) == 0 && "Expected memory regions to be equal after ft_memcmp and memcmp");

	str1[5] = 'b';
	str2[5] = 'c';
	assert(ft_memcmp(str1, str2, 10) == memcmp(str1, str2, 10) && "Expected memory regions to differ correctly for ft_memcmp and memcmp");

	assert(ft_memcmp(NULL, NULL, 0) == 0 && "Expected ft_memcmp with NULL and length 0 to return 0");

	free(str1);
	free(str2);
}

static void	test_ft_strlcpy(void)
{
	char *str1 = (char *)malloc(10);

	ft_strlcpy(str1, "Hello", 10);
	assert(ft_strncmp(str1, "Hello", 10) == 0 && "Expected 'Hello' to be copied correctly by ft_strlcpy");

	ft_strlcpy(str1, "World", 0);
	assert(ft_strncmp(str1, "Hello", 10) == 0 && "Expected no change in str1 when ft_strlcpy is called with size 0");

	free(str1);
}

static void	test_ft_strlcat(void)
{
	char *str1 = (char *)malloc(10);

	ft_strlcpy(str1, "Hello", 10);
	ft_strlcat(str1, "World", 10);
	assert(ft_strncmp(str1, "HelloWorl", 10) == 0 && "Expected 'HelloWorl' after ft_strlcat");

	ft_strlcat(str1, "d", 10);
	assert(ft_strncmp(str1, "HelloWorl", 10) == 0 && "Expected no change when concatenating beyond buffer size in ft_strlcat");

	free(str1);
}

static void	test_ft_strnstr(void)
{
	char *str1 = (char *)malloc(10);

	ft_strlcpy(str1, "Hello", 10);
	assert(ft_strnstr(str1, "Hello", 10) == str1 && "Expected to find 'Hello' in str1 with ft_strnstr");

	assert(ft_strnstr(str1, "World", 10) == NULL && "Expected not to find 'World' in str1 with ft_strnstr");

	free(str1);
}

static void	test_ft_atoi(void)
{
	assert(ft_atoi("123") == 123 && "Expected '123' to convert to integer 123 with ft_atoi");
	assert(ft_atoi("-123") == -123 && "Expected '-123' to convert to integer -123 with ft_atoi");
	assert(ft_atoi("123a") == 123 && "Expected '123a' to convert to integer 123 with ft_atoi");
	assert(ft_atoi("a123") == 0 && "Expected 'a123' to convert to integer 0 with ft_atoi");
	assert(ft_atoi(" 123") == 123 && "Expected ' 123' to convert to integer 123 with ft_atoi");
}

static void	test_ft_calloc(void)
{
	// NULL pointer is returned when allocation fails, we just check if the pointer is NULL or not
	char *str1 = (char *)ft_calloc(0, 1);
	assert((str1 == NULL || str1 != NULL) && "Expected ft_calloc to return a NULL or valid pointer when allocating 0 elements");
	free(str1);

	str1 = (char *)ft_calloc(10, 0);
	assert((str1 == NULL || str1 != NULL) && "Expected ft_calloc to return a NULL or valid pointer when allocating elements of size 0");
	free(str1);

	str1 = (char *)ft_calloc(10, 1);
	assert(str1 != NULL && "Expected ft_calloc to return a non-NULL pointer when allocating 10 bytes");
	assert(ft_memchr(str1, 0, 10) != NULL && "Expected memory to be zeroed after ft_calloc");
	free(str1);
}

static void	test_ft_strdup(void)
{
	char *str1 = ft_strdup("Hello");
	assert(ft_strncmp(str1, "Hello", 10) == 0 && "Expected 'Hello' to be copied correctly by ft_strdup");
	free(str1);

	str1 = ft_strdup("");
	assert(ft_strncmp(str1, "", 10) == 0 && "Expected empty string to be copied correctly by ft_strdup");
	free(str1);
}

static void	test_ft_substr(void)
{
	char *str1 = ft_substr("Hello", 1, 3);
	assert(ft_strncmp(str1, "ell", 10) == 0 && "Expected 'ell' to be copied correctly by ft_substr");
	free(str1);

	str1 = ft_substr("Hello", 1, 10);
	assert(ft_strncmp(str1, "ello", 10) == 0 && "Expected 'ello' to be copied correctly by ft_substr");
	free(str1);

	str1 = ft_substr("World", 10, 10);
	assert(ft_strncmp(str1, "", 10) == 0 && "Expected '' to be returned when start is out of bounds");
	free(str1);
}

static void	test_ft_strjoin(void)
{
	char *str1 = ft_strjoin("Hello", " ");
	char *str2 = ft_strjoin(str1, "World");
	assert(ft_strncmp(str1, "Hello ", 10) == 0 && "Expected 'Hello ' to be concatenated correctly by ft_strjoin");
	free(str1);
	assert(ft_strncmp(str2, "Hello World", 10) == 0 && "Expected 'Hello World' to be concatenated correctly by ft_strjoin");
	free(str2);

	str1 = ft_strjoin("", "World");
	assert(ft_strncmp(str1, "World", 10) == 0 && "Expected 'World' to be concatenated correctly by ft_strjoin");
	free(str1);

	str1 = ft_strjoin("Hello", "");
	assert(ft_strncmp(str1, "Hello", 10) == 0 && "Expected 'Hello' to be concatenated correctly by ft_strjoin");
	free(str1);

	str1 = ft_strjoin("", "");
	assert(ft_strncmp(str1, "", 10) == 0 && "Expected empty string to be concatenated correctly by ft_strjoin");
	free(str1);
}

static void	test_ft_strtrim(void)
{
	char *str1 = ft_strtrim("  Hello  ", " ");
	assert(ft_strncmp(str1, "Hello", 10) == 0 && "Expected 'Hello' to be trimmed correctly by ft_strtrim");
	free(str1);

	str1 = ft_strtrim("  Hello  ", "Helo ");
	assert(ft_strncmp(str1, "", 10) == 0 && "Expected all characters to be trimmed when set contains all characters");
	free(str1);

	str1 = ft_strtrim("Hello", "");
	assert(ft_strncmp(str1, "Hello", 10) == 0 && "Expected no change when set is empty");
	free(str1);

	str1 = ft_strtrim("", "Hello");
	assert(ft_strncmp(str1, "", 10) == 0 && "Expected empty string when input is empty");
	free(str1);

	str1 = ft_strtrim("***Hello**World***", "*");
	assert(ft_strncmp(str1, "Hello**World", 10) == 0 && "Expected to trim '*' characters from both ends");
	free(str1);
}

static void test_ft_split(void)
{
	char **str1 = ft_split("Hello World", ' ');
	assert(ft_strncmp(str1[0], "Hello", 10) == 0 && "Expected 'Hello' to be split correctly by ft_split");
	assert(ft_strncmp(str1[1], "World", 10) == 0 && "Expected 'World' to be split correctly by ft_split");
	free(str1[0]);
	free(str1[1]);
	free(str1);

	str1 = ft_split("Hello World", 'o');
	assert(ft_strncmp(str1[0], "Hell", 10) == 0 && "Expected 'Hell' to be split correctly by ft_split");
	assert(ft_strncmp(str1[1], " W", 10) == 0 && "Expected ' W' to be split correctly by ft_split");
	assert(ft_strncmp(str1[2], "rld", 10) == 0 && "Expected 'rld' to be split correctly by ft_split");
	free(str1[0]);
	free(str1[1]);
	free(str1[2]);
	free(str1);

	str1 = ft_split("Hello World", '\0');
	assert(ft_strncmp(str1[0], "Hello World", 10) == 0 && "Expected 'Hello World' to be split correctly by ft_split");
	free(str1[0]);
	free(str1);
}

static void	test_ft_itoa(void)
{
	char *str1 = ft_itoa(123);
	assert(ft_strncmp(str1, "123", 10) == 0 && "Expected '123' to be converted correctly by ft_itoa");
	free(str1);

	str1 = ft_itoa(-123);
	assert(ft_strncmp(str1, "-123", 10) == 0 && "Expected '-123' to be converted correctly by ft_itoa");
	free(str1);

	str1 = ft_itoa(-0);
	assert(ft_strncmp(str1, "0", 10) == 0 && "Expected '0' to be converted correctly by ft_itoa");
	free(str1);

	str1 = ft_itoa(2147483647);
	assert(ft_strncmp(str1, "2147483647", 10) == 0 && "Expected '2147483647' to be converted correctly by ft_itoa");
	free(str1);

	str1 = ft_itoa(-2147483648);
	assert(ft_strncmp(str1, "-2147483648", 10) == 0 && "Expected '-2147483648' to be converted correctly by ft_itoa");
	free(str1);
}

static char tmp_ft_strmapi(unsigned int i, char c)
{
	(void) c;
	return (char) (i + 'a');
}

static void	test_ft_strmapi(void)
{
	char *str1 = ft_strmapi("Hello", tmp_ft_strmapi);
	assert(ft_strncmp(str1, "abcde", 10) == 0 && "Expected 'abcde' to be generated correctly by ft_strmapi");
	free(str1);

	str1 = ft_strmapi("", &tmp_ft_strmapi);
	assert(ft_strncmp(str1, "", 10) == 0 && "Expected empty string to be generated correctly by ft_strmapi");
	free(str1);
}

static void tmp_ft_striteri(unsigned int i, char *c)
{
	*c = (char) (i + 'a');
}

static void	test_ft_striteri(void)
{
	char str1[6] = "Hello";
	ft_striteri(str1, &tmp_ft_striteri);
	assert(ft_strncmp(str1, "abcde", 10) == 0 && "Expected 'abcde' to be generated correctly by ft_striteri");

	char str2[1] = "";
	ft_striteri(str2, &tmp_ft_striteri);
	assert(ft_strncmp(str2, "", 10) == 0 && "Expected empty string to be generated correctly by ft_striteri");
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

	test_ft_memset();
	test_ft_bzero();

	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();

	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strnstr();

	test_ft_atoi();

	test_ft_calloc();
	test_ft_strdup();

	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();

	printf("All tests passed!\n");
}
