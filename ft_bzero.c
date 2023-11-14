/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:20:42 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/10 17:37:59 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*ptr++ = 0;
		i++;
	}
}

/*int main(void) 
{
    char str[10] = "42Urduliz";
    printf("Before ft_bzero: %s\n", str);

    ft_bzero(str, 5);

    printf("After ft_bzero: %s\n", str);

	    for (int i = 0; i < 10; i++) 
		{
        printf("%d ", str[i]);
		}

    return 0;
}*/
