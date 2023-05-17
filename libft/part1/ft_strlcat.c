/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 08:58:00 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:28:45 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strlcat(char *dest, const char *src, unsigned int size)
{
	int				len;
	unsigned int	i;
	unsigned int	j;

	len = ft_strlen(dest);
	i = 0;
	while (i < size && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	j = 0;
	while (j < size - len - i)
	{
		dest[len + i + j] = '\0';
		j++;
	}
	return (dest);
}
