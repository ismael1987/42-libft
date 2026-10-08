/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:32:35 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/06 10:32:39 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intCounter(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nb;
	long	num;

	num = n;
	nb = intCounter(num);
	i = 0;
	str = malloc(sizeof(char) * (nb + 1));
	if (!str)
		return (NULL);
	str[nb] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		num = num * -1;
		str[0] = '-';
		i++;
	}
	while (nb > i)
	{
		nb--;
		str[nb] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

int	main(void)
{
	char *str;

	str = ft_itoa(0);
	printf("0           -> %s\n", str);
	free(str);

	str = ft_itoa(42);
	printf("42          -> %s\n", str);
	free(str);

	str = ft_itoa(123456);
	printf("123456      -> %s\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("-42         -> %s\n", str);
	free(str);

	str = ft_itoa(-123456);
	printf("-123456     -> %s\n", str);
	free(str);

	return (0);
}