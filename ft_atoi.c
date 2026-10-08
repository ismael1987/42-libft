/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:53:36 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/01 14:53:49 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	result;

	i = 0;
	result = 0;
	s = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			s = -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * s);
}

/*
int	main(void)
{
	char	str[] = "  +++12345";
	int		num;
	int		num2;

	// Convert string to integer
	num = ft_atoi(str);
	num2 = atoi(str);
	printf("The integer value is: %d\n", num);
	printf("The integer value is: %d\n", num2);
	return (0);
}
*/