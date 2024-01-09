/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:47 by fluzi             #+#    #+#             */
/*   Updated: 2023/12/20 15:42:14 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*prov;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	prov = (int *) malloc(sizeof(int) * (max - min));
	if (prov == NULL)
		return (-1);
	while (i < (max - min))
	{
		prov[i] = min + i;
		i++;
	}
	*range = prov;
	return (i);
}
