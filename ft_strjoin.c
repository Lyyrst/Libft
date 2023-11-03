/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:50:41 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/11/03 18:50:28 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

static char	*ft_cat(char *dest, char const *src)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = -1;
	while (src[++i])
		dest[len + i] = src[i];
	dest[len + i] = 0;
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!s1 || !s2)
		return (0);
	if (!str)
		return (0);
	*str = 0;
	str = ft_cat(str, s1);
	str = ft_cat(str, s2);
	return (str);
}
