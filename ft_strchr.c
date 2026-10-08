/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:43:50 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/30 12:43:53 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != (char)ch)
	{
		if (*str == 0)
		{
			return (0);
		}
		*str++;
	}
	return ((char *)str);
}
/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "Hello World";
	result = ft_strchr(str, 'W');
	printf("String: %s\n", str);
	printf("Found: %s\n", result);
	return (0);
}
*/