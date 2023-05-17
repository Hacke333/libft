/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:20:59 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:28:27 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	i = 0;
	temp = (char *)malloc(sizeof(char) * n);
	while (i < n)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
