/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:47:17 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/10/31 16:37:15 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(int argc, char** argv)
{
	(void) argc;
	printf("mylib :%s\n", ft_strdup(argv[1]));
	printf("lib c :%s", strdup(argv[1]));
}