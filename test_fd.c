/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:01:15 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/24 18:08:23 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

static void	test_ft_putchar_fd(void)
{
	int		fd;
	char	c;

	fd = open("test_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // 0644 is the permission, 6 is read and write permission for the owner, 4 is read permission for the group and others
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	c = 'a';
	ft_putchar_fd(c, fd);
	close(fd);
	fd = open("test_fd.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	read(fd, &c, 1);
	assert(c == 'a' && "Expected 'ft_putchar_fd' to write 'a' to file descriptor");
	close(fd);
}

static void	test_ft_putstr_fd(void)
{
	int		fd;
	char	s[] = "Hello, World!";
	char	buf[14];

	fd = open("test_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	ft_putstr_fd(s, fd);
	close(fd);
	fd = open("test_fd.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	read(fd, buf, 14);
	assert(ft_strncmp(buf, s, 14) == 0 && "Expected 'ft_putstr_fd' to write 'Hello, World!' to file descriptor");
	close(fd);
}

static void	test_ft_putendl_fd(void)
{
	int		fd;
	char	s[] = "Hello, World!";
	char	buf[15];

	fd = open("test_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	ft_putendl_fd(s, fd);
	close(fd);
	fd = open("test_fd.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	read(fd, buf, 15);
	assert(ft_strncmp(buf, "Hello, World!\n", 15) == 0 && "Expected 'ft_putendl_fd' to write 'Hello, World!\n' to file descriptor");
	close(fd);
}

static void	test_ft_putnbr_fd(void)
{
	char	*buf;
	int		fd;

	fd = open("test_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	ft_putnbr_fd(13, fd);
	close(fd);
	fd = open("test_fd.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	buf = ft_calloc(3, sizeof(char));
	read(fd, buf, 2);
	assert(ft_strncmp(buf, "13", 2) == 0 && "Expected 'ft_putnbr_fd' to write '13' to file descriptor");
	close(fd);
	free(buf);
}

int	main(void)
{
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();

	printf("All tests passed!\n");
}
