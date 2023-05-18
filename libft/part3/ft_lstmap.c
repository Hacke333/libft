/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:54:22 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:56:20 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*fresh;

	fresh = f(lst);
	ret = fresh;
	while (lst->next)
	{
		lst = lst->next;
		fresh->next = f(lst);
		fresh = fresh->next;
	}
	return (ret);
}
