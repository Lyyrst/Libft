<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:29:37 by kbutor-b          #+#    #+#             */
/*   Updated: 2023/11/08 19:36:28 by kbutor-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*min_int(long long int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 12);
	i = 11;
	str[i--] = 0;
	str[0] = '-';
	n *= -1;
	while (n > 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (min_int(n));
	i = ft_getlen(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = 0;
	if (n == 0)
		str[i] = 0 + 48;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
=======
#include <stdlib.h>

int	ft_atoi(const char *str)
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

int ft_getlen(int	n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_getlen(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = 0;
	if (n == 0)
		str[i] = 0 + 48;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10; 
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa(ft_atoi(argv[1])));
}
>>>>>>> 5596187fd3ea2a11bb2ab1c8ed3913b538ac0067
