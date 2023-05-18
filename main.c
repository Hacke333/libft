/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:18:48 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:59:12 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

t_list	*del(t_list *lst)
{
	lst->content = "deleted";
	return (lst);
}

void	print(t_list *lst)
{
	ft_putendl(lst->content);
	ft_putnbr(lst->content_size);
	ft_putendl("");
}

int	main(void)
{
	t_list	*list;
	t_list	*list2;

	list = ft_lstnew("hello", 6);
	list2 = ft_lstnew("world", 6);
	ft_lstadd(&list, list2);
	list = ft_lstmap(list, del);
	ft_lstiter(list, print);
	return (0);
}
