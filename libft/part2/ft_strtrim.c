/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:04:50 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:06:40 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > i)
		--j;
	str = ft_strsub(s, i, j - i + 1);
	return (str);
}
