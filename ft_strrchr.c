/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:58:09 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/14 17:39:42 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence = NULL;

	while (*s != '\0')
	{
		if (*s == (char)c)
			last_occurrence = s;
			s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last_occurrence);
}
