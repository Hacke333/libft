/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/18 09:16:31 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	*str;
	char	*str2;

	str = ft_memalloc(10);
	str2 = ft_memalloc(10);
	ft_strcpy(str, "Hello");
	ft_strcpy(str2, "Hello ");
	printf("ft_strequ: %d\n", ft_strnequ(str, str2, 6));
	return (0);
}
