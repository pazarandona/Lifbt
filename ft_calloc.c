/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pazarand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:16:46 by pazarand          #+#    #+#             */
/*   Updated: 2023/11/10 17:53:29 by pazarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_memset(result, 0, count * size);
		return (result);
	}
}

/*int main (void) 
{
    int	*ptr; 
	
	ptr	= (int *)ft_calloc(5, sizeof(int));
    if (ptr != NULL) 
	{
        for  (int i = 0; i < 5; i++) 
		{
            printf("%d ", ptr[i]);
        }
        free(ptr);
    } 
	else 
	{
        printf("Error al asignar memoria.\n");
    }

    return 0;
}*/
