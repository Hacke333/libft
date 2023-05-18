/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:42:58 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/19 00:46:07 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, unsigned int))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
