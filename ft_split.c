/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 10:55:49 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/05 10:55:53 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t wordCounter(char const *s, char c)
{
    int i;
    size_t words;
    int    insideTheSub;

    i = 0;
    words = 0;

    while (s[i] != '\0')
    {
        insideTheSub = 0;
        while (s[i] == c && s[i] != '\0')
        {
            i++;
        }
        while (s[i] != c && s[i] != '\0')
        {
            if (insideTheSub == 0)
            {
                words++;
                insideTheSub = 1;
            }
            i++;
        }
    }
    return words;
}

static char *subwords(char const *s, char c)
{
    int i;
    char    *dest;

    i = 0;
    while (s[i] != c && s[i] != '\0')
    {
        i++;
    }
    dest = malloc((i + 1) * sizeof(char *));
    if(!dest)
        return (NULL);
    i = 0;
    while (s[i] != '\0' && s[i] != c)
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char **ft_split(char const *s, char c)
{
    size_t words;
    char **wordsArray;
    int i;
    int j;

    words = wordCounter(s, c);
    if(!s)
        return NULL;
    wordsArray = malloc((words + 1) * sizeof(char *));
    if(!wordsArray)
        return NULL;
    i = 0;
    j = 0;
    while (j < words)
    {
        while (s[i] != '\0' && s[i] == c)
            i++;
        wordsArray[j] = subwords(s + i, c);
            j++;
        while (s[i] != '\0' && s[i] != c)
            i++;
    }
    wordsArray[j] = NULL;
    return(wordsArray); 
}

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world 42 Vienna", ' ');
	if (!result)
		return (1);

	i = 0;
	while (result[i])
	{
		printf("word[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}