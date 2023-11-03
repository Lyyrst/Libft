/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:10:28 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/11/02 14:43:43 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	char	c2;
	int		i;

	s = (char *)str;
	c2 = (char)c;
	i = 0;
	while (s[i] && n > 0)
	{
		if (s[i] == c2)
			return (&s[i]);
		i++;
		n--;
	}
	return (0);
}
