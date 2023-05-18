/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:08:15 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:16:54 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		pointer1;
	int		pointer2;
	int		result_index;
	char	**result;
	char	*res;

	result = (char **)ft_memalloc(sizeof(char *) * (ft_strlen(s) + 1));
	pointer1 = 0;
	pointer2 = 0;
	result_index = 0;
	while (s[pointer2])
	{
		if (s[pointer2] == c)
		{
			res = ft_strsub(s, pointer1, pointer2 - pointer1);
			if (res[0] != '\0')
				result[result_index++] = res;
			pointer1 = pointer2 + 1;
		}
		pointer2++;
	}
	result[result_index] = ft_strsub(s, pointer1, pointer2);
	return (result);
}
