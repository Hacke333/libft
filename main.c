/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:25:27 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	*mem;

	mem = malloc(10);
	printf("ft_bzero: %s\n", mem);
	ft_memset(mem, 'A', 3);
	printf("ft_bzero: %s\n", mem);
	ft_bzero(mem, 3);
	printf("ft_bzero: %s\n", mem);
	return (0);
}
