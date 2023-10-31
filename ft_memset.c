/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:32:10 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/10/31 16:49:56 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, char c, int n)
{
	while (n > 0)
	{
		*((char *)str + n - 1) = c;
		n--;
	}
	return (str);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(int argc, char** argv)
{
	(void) argc;
	printf("mylib :%s\n", (char *)ft_memset(argv[1], argv[2][0], 0));
	printf("lib c :%s", (char *)memset(argv[1], argv[2][0], 0));
}