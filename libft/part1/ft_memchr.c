/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:16:20 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:28:13 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n && str[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (0);
	return ((void *)&str[i]);
}
