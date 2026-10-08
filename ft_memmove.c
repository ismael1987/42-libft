/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:55:15 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 16:55:21 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	d = dest;
	s = src;
	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
		while (i < n)
			d[i] = s[i];
	i++;
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "ABCDE";

	printf("Before: %s\n", str);
	ft_memmove(str + 2, str, 3);
	printf("After:  %s\n", str);
	return (0);
}
*/
