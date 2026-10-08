/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:02:51 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/01 13:02:55 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (sub_str[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && str[i + j] == sub_str[j])
		{
			j++;
			if (sub_str[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;

	str = "Hello World";
	printf("1: %s\n", ft_strnstr(str, "World", 11));
	printf("2: %s\n", ft_strnstr(str, "Hello", 11));
	printf("3: %s\n", ft_strnstr(str, "World", 5));
	printf("4: %s\n", ft_strnstr(str, "World", 10));
	printf("5: %s\n", ft_strnstr(str, "", 5));
	printf("6: %s\n", ft_strnstr(str, "xyz", 11));
	printf("7: %s\n", ft_strnstr(str, "lo Wo", 9));
	printf("8: %s\n", ft_strnstr(str, "lo Wo", 8));
	return (0);
}
*/