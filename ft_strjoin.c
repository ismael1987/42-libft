/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:25:59 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/03 15:29:10 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	s1len;
	int	s2len;
	char	*fullstr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1 == '\0' || s2 == '\0')
	{
		return (NULL);
	}
	fullstr = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!fullstr)
	{
		return (NULL);
	}
	ft_memcpy(fullstr, s1, s1len);
	ft_memcpy(fullstr + s1len, s2, s2len + 1);
	return (fullstr);
}
