/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:48:09 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:50:24 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, unsigned int))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *alst;
	while (tmp)
	{
		next = tmp->next;
		del(tmp->content, tmp->content_size);
		ft_memdel((void **)&tmp);
		tmp = next;
	}
	*alst = 0;
}
