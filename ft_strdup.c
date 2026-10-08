/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:58:28 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/02 15:58:32 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	size_t	i;
	char	*cpstr;

	len = ft_strlen(src);
	cpstr = malloc(len + 1);
	if (cpstr == 0)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		cpstr[i] = src[i];
		i++;
	}
	cpstr[i] = '\0';
	return (cpstr);
}

/*
int	main(void)
{
	char	*original;
	char	*copy;

	original = "Hello, world!";
	copy = ft_strdup(original);
	if (!copy)
	{
		printf("malloc failed\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Copy:    %s\n", copy);
	free(copy);
	return (0);
}
*/