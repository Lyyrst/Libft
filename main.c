/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:01:30 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/10/31 15:01:38 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <bsd/string.h>

char	*strnstr(const char *big, const char *little, size_t len);

int	main(int argc, char** argv)
{
	(void) argc;
	printf("mylib :%s\n", ft_strnstr(argv[1], argv[2], 15));
	printf("lib c :%s", strnstr(argv[1], argv[2], 15));
}