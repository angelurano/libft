/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:24:54 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/17 19:56:06 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main (void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('0'));
}
*/
