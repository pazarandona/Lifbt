/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:19:47 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/14 11:56:50 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n != 0)
	{	
		n /= 10;
		len++;
	}
	return (len);
}	

static void	ft_fill_str(char *str, int n, int len)
{
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		while (n != 0)
		{
			str[len--] = '0' - (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (n != 0)
		{
			str[len--] = '0' + (n % 10);
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill_str(str, n, len);
	return (str);
}
