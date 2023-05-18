/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:00:02 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:02:11 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, unsigned int len)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	str = ft_strnew(len);
	if (!str)
		return (0);
	while (len--)
		str[i++] = s[start++];
	return (str);
}
