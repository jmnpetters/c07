/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: jpetters <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/09/26 16:42:40 by jpetters	       #+#    #+#	      */
/*   Updated: 2023/09/28 16:34:29 by jpetters         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
