/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:32:59 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/10/30 16:12:20 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *str, int n)
{
	while (n > 0)
		str[n-- - 1] = 0;
}

void	*calloc(int n, int size)
{
	void	*array;

	if (n == 0 || size == 0)
		return (0);
	array = malloc(sizeof(size) * n);
	if (!array)
		return (0);
	ft_bzero(array, n);
	return (array);
}
