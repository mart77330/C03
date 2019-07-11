/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoret <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:39:20 by mmoret            #+#    #+#             */
/*   Updated: 2019/07/11 19:57:42 by mmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((src[j]) && (j < nb))
	{	
		dest[i] = src[j];
		i++;
		j++;	
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *a;
	char src[4] = "efgh";
	char dest[8] = "abcd";
	unsigned int test = 2;
	
	a = ft_strncat(dest, src, test);
	printf("%s", dest);


	

	
}
