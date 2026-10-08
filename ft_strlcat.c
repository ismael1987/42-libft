/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:41:43 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/30 10:41:48 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	buf;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
	{
		return (slen + dstsize);
	}
	buf = dstsize - dlen - 1;
	while (i < buf && dst[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
	char	dst[20] = "Hello ";
	char	src[] = "World";
	size_t	result;

	result = ft_strlcat(dst, src, sizeof(dst));
	printf("dst: %s\n", dst);
	printf("return: %zu\n", result);
	return (0);
}
*/