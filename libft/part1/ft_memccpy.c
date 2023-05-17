/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:34:39 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:28:12 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *restrict dest, const void *restrict src, int c,
		unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((char *)src)[i] != (char)c)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
