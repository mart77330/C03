/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoret <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:28:04 by mmoret            #+#    #+#             */
/*   Updated: 2019/07/11 22:37:14 by mmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int compteur;

	i = 0;
	j = 0;
	while (dest[i]) 
	{
		i++;
	}
	while ((src[j]) && ( i < size - 1))
	{
			
		dest[i] = src[j];
		i++;
		j++;
		compteur++;		
	}		
			
	dest[i] = '\0'
	return (compteur);	
}	
