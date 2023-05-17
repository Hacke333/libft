/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:58:33 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:28:57 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	check_substr(const char *str, const char *substr, unsigned int len,
		unsigned int pointer1)
{
	int	i;

	i = 0;
	while (substr[i] && pointer1 < len)
	{
		if (str[i] != substr[i])
			return (0);
		i++;
		pointer1++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	pointer1;

	pointer1 = 0;
	len--;
	while (haystack[pointer1] && pointer1 < len)
	{
		if (haystack[pointer1] == needle[0])
		{
			if (check_substr(&haystack[pointer1], needle, len, pointer1))
				return ((char *)&haystack[pointer1]);
		}
		pointer1++;
	}
	return (0);
}
