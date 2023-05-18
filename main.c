/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:18:44 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	//test itoa
	printf("itoa: %s\n", ft_itoa(123));
	printf("itoa: %s\n", ft_itoa(-123));
	printf("itoa: %s\n", ft_itoa(0));
	printf("itoa: %s\n", ft_itoa(2014748364));
	printf("itoa: %s\n", ft_itoa(-2147483647));
	return (0);
}
