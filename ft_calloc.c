/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:32:59 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/11/02 14:20:24 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	ft_bzero(void *str, int n)
{
	while (n > 0)
		((char *)str)[n-- - 1] = 0;
}

void	*ft_calloc(size_t n, size_t size)
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
