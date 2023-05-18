/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:30:10 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:40:03 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void const *content, unsigned int content_size)
{
	t_list	*new;

	new = (t_list *)ft_memalloc(sizeof(t_list));
	if (!new)
		return (0);
	if (!content)
	{
		new->content = 0;
		new->content_size = 0;
	}
	else if (content_size)
	{
		new->content = (void *)ft_memalloc(sizeof(content_size));
		if (!new->content)
			return (0);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = 0;
	return (new);
}
