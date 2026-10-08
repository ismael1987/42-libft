/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:18:28 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 13:18:36 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str1[20] = "Hello World!";
	char	str2[20] = "Hello World!";

	ft_bzero(str1, 5);
	bzero(str2, 5);
	printf("ft_bzero: %s\n", str1+5);
	printf("bzero:    %s\n", str2+5);
	return (0);
}
*/