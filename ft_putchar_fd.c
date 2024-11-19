/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:38:16 by aboukent          #+#    #+#             */
/*   Updated: 2024/11/13 10:54:55 by aboukent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/stat.h>
int	main()
{
	char c = 'A';
	int	fd = open("text", O_WRONLY);
		ft_putchar_fd(c, fd);
		printf("%d", fd);
}
*/
