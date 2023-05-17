/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:44:42 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 23:42:28 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	n--;
	while (i < n && str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
