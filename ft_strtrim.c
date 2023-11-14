/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:25:46 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/14 17:41:19 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	size_t	len_s1;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	end = len_s1;
	while (end > i && ft_strchr(set, s1[end]))
		end--;
	dst = ft_substr(s1, i, end - i + 1);
	return (dst);
}
