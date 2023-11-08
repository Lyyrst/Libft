/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:00:32 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/11/08 18:06:02 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		ldest;
	size_t		lsrc;

	i = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size <= ldest)
		return (size + lsrc);
	while (src[i] && ldest + i < size - 1)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	if (ldest + i < size)
	{
		dest[ldest + i] = 0;
		return (ldest + lsrc);
	}
	return (size);
}
