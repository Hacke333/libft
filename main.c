/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:25:02 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	// test ft_putnbr_fd
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(10, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-10, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(100, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-100, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
