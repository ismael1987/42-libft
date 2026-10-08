/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 19:33:18 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/03 19:33:21 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_char(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*resstr;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (check_char(s1[start], set) == 1)
	{
		start++;
	}
	while (check_char(s1[end], set) == 1)
	{
		end--;
	}
	resstr = malloc(sizeof(char) * ((end - start) + 1));
	if (!resstr)
	{
		return (NULL);
	}
	while (start < end)
	{
		resstr[i] = s1[start];
		i++;
		start++;
	}
	resstr[i] = '\0';
	return (resstr);
}
