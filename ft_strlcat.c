/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:33:25 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/14 17:32:07 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	orig;
	size_t	i;

	i = 0;
	orig = ft_strlen(src);
	dest = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dest)
	{
		return (dstsize + orig);
	}
	while (i < (dstsize - dest - 1) && src[i])
	{
		dst[dest + i] = src[i];
		i++;
	}
		dst[dest + i] = '\0';
	return (dest + orig);
}
