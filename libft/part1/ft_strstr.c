/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:50:39 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:29:01 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	check_substr(const char *str, const char *substr)
{
	int	i;

	i = 0;
	while (substr[i])
	{
		if (str[i] != substr[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	pointer1;

	pointer1 = 0;
	while (haystack[pointer1])
	{
		if (haystack[pointer1] == needle[0])
		{
			if (check_substr(&haystack[pointer1], needle))
				return ((char *)&haystack[pointer1]);
		}
		pointer1++;
	}
	return (0);
}
