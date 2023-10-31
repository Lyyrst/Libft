/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:41 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/10/31 15:01:18 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	int	i;
	int	i2;

	i = -1;
	if (tofind[0] == 0)
		return ((char *)&str[0]);
	while (str[++i] && n-- > 0)
	{
		if (str[i] == tofind[0])
		{
			i2 = 0;
			while (tofind[i2++])
			{
				if (tofind[i2] != str[i2 + i] && i2 < ft_strlen(tofind))
					break ;
				if (ft_strlen(tofind) == i2)
					return ((char *)&str[i]);
			}
		}
	}
	return (0);
}
