/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoret <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:59:53 by mmoret            #+#    #+#             */
/*   Updated: 2019/07/11 22:24:01 by mmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i])
	{
		if(str[i] - to_find[j] == 0)
		{	
			k = i;
			while (str[i] == to_find [j] && to_find[j] != '\0')				
			{
				i++;
				j++;	
			}
			if (to_find[j] == '\0')
				return(&str[k]);	
			i = k;
			j = 0;
		}
		i++;
	}
	return (0);
}
