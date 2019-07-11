/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoret <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:21:13 by mmoret            #+#    #+#             */
/*   Updated: 2019/07/11 19:35:21 by mmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "string.h"
#include "stdio.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			break;
		i++;
	}
	if((s1[i] < 0) && (s2[i] > 0))
		return(-s1[i] - s2[i]); 
	if((s1[i] > 0) && (s2[i] < 0))
	    return(s1[i] - (-s2[i]));
	else
		return(s1[i] - s2[i]);
}	
