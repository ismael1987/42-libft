/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:46:12 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/03 11:46:15 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sub_len;

	if (!s)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	sub_len = ft_strlen(s + start);
	if (len > sub_len)
	{
		len = sub_len;
	}
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
int	main(void)
{
	unsigned int start;
	size_t len;
	char *src_ptr = "We are supercalifragilisticexpialidocious!";

	printf("Source: '%s'\n\n", src_ptr);

	start = 7;
	len = 9;
	printf("start: %d\n", start);
	printf("length: %zu\n", len);
	printf("Substring: '%s'\n\n", ft_substr(src_ptr, start, len));

	start = 7;
	len = 99;
	printf("start: %d\n", start);
	printf("length: %zu\n", len);
	printf("Substring: '%s'\n\n", ft_substr(src_ptr, start, len));

	start = 99;
	len = 7;
	printf("start: %d\n", start);
	printf("length: %zu\n", len);
	printf("Substring: '%s'\n\n", ft_substr(src_ptr, start, len));

	start = 7;
	len = 9;
	src_ptr = NULL;
	printf("Source: '%s'\n", src_ptr);
	printf("start: %d\n", start);
	printf("length: %zu\n", len);
	printf("Substring: '%s'\n", ft_substr(src_ptr, start, len));

	return (0);
}
*/