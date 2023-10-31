/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:44:54 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/10/31 16:52:47 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	ret;
	int	par;

	i = 0;
	ret = 0;
	par = 0;
	if (str[0] == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32)
			i++;
	if (str[i] == '-')
		par = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9')
		&& str[i])
	{
		ret *= 10;
		ret += str[i++] - 48;
	}
	if (par == 1)
		return (ret * -1);
	return (ret);
}

char	*ft_strdup(char *src, size_t n)
{
	int		i;
	char	*dest;

	i = -1;
	dest = malloc(sizeof(char) * (n + 1));
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

void	*ft_memmove(void *dest,const void *src, size_t n)
{
	char *s;
	char *d;
	char *temp;

	d = (char *)dest;
	s = (char *)src;
	temp = ft_strdup(s, n);
	while (n > 0)
	{
		d[n - 1] = temp[n - 1];
		n--;
	}
	free(temp);
	return(dest);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s", (char *)ft_memmove(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}