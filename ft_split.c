/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:27:00 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/14 17:27:40 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_strd(const char *s, int len)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*store_next_word(char const **s, char c)
{
	char	*word;
	int		word_len;

	while (**s == c)
	(*s)++;
	word_len = (0);
	while ((*s)[word_len] && (*s)[word_len] != c)
		word_len++;
	word = ft_strd(*s, word_len);
	if (!word)
		return (NULL);
	*s += word_len;
	return (word);
}

static void	free_memory(char ***arr, int i)
{
	while (i--)
		free((*arr)[i]);
	free(*arr);
	*arr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		result[i] = store_next_word(&s, c);
		if (!result[i])
		{
			free_memory(&result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
