/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:20:20 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/11/14 14:04:13 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !(*del))
		return ;
	t_list	*temp;

	while (*lst)
	{
		(*del)((*lst)->content);
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
	*lst = 0;
}
