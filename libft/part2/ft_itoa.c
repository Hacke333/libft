/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:14:20 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:19:04 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		++len;
		n = -n;
	}
	while (n > 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
		return (str);
	}
	len = ft_intlen(n);
	str = ft_strnew(len);
	if (str == 0)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len > 0 && str[len - 1] != '-')
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		--len;
	}
	return (str);
}
