/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:44:44 by fluzi             #+#    #+#             */
/*   Updated: 2023/12/20 15:44:30 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = (int *) malloc(sizeof(int) * (max - min));
	if ((max - min) <= 0)
		return (NULL);
	if (dest == NULL)
		return (NULL);
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
