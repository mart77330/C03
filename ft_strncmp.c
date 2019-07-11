/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoret <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:33:32 by mmoret            #+#    #+#             */
/*   Updated: 2019/07/11 17:58:04 by mmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int		ft_strncmp(char*s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
	{
		if (s1[i] == '\0')
			break;
		i++;	
	}
	if (i == n)
		return (0);
	if ((s1[i] < 0) && (s2[i] > 0))
		return (-s1[i] - s2[i]);
	if ((s1[i] > 0) && (s2[i] < 0))
		return (s1[i] - (-s2[i]));
	else
		return (s1[i] - s2[i]);    

}
