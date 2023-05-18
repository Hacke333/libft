/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:46:30 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	del(void *content, unsigned int content_size)
{
	ft_putendl("del");
	ft_putendl(content);
	ft_putnbr(content_size);
	ft_putendl("");
}

int	main(void)
{
	t_list	*new;

	new = ft_lstnew("Hello", 5);
	ft_lstdelone(&new, del);
	del(new->content, new->content_size);
	return (0);
}
