/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:41:11 by migugar2          #+#    #+#             */
/*   Updated: 2025/04/26 19:45:24 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>

# include "get_next_line.h"
# include "ft_printf.h"
# include "ft_errors.h"
# include "ft_lst.h"
# include "ft_dlst.h"
# include "ft_stack.h"
# include "ft_dynarr.h"
# include "ft_dynstr.h"

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isxdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);

int			ft_tolower(int c);
int			ft_toupper(int c);

size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strnchr(const char *s, int c, size_t n);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strnstr(const char *big, const char *little, size_t len);

int			ft_atoi(const char *nptr);
int			ft_sqrt(int nb);
void		ft_swap(int *a, int *b);
void		ft_swapf(float *a, float *b);
long long	ft_atoll(const char *nptr);
size_t		ft_indexof(int *arr, size_t size, int val);
int			*ft_insertionsort(int *array, size_t size);
int			*ft_quicksort(int *array, size_t low, size_t high);
int			*ft_tosorted(int *array, size_t size);

void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);

char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

void		*ft_free(void **ptr);

int			**ft_freeintmatrix(int ***matrix, size_t size);

char		*ft_freestr(char **str);
char		**ft_freestrarr_r(char ***arr, size_t i);
char		**ft_freestrarr(char ***arr);
char		***ft_freestrmatrix_r(char ****matrix, size_t i);
char		***ft_freestrmatrix(char ****matrix);

int			ft_close(int *fd);

#endif
