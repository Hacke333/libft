/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/18 08:52:27 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	a(unsigned int i, char c)
{
	char	a;

	a = i + '0';
	write(1, &a, 1);
	return (c + 1);
}

int	main(void)
{
	char	*str;
	char	*new;

	str = "Hello Wor";
	new = ft_strmapi(str, a);
	printf("%s\n", new);
	return (0);
}
