/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:06:54 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 21:05:19 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		result = (int *) malloc(sizeof(int));
		result = NULL;
		return (result);
	}
	i = 0;
	result = (int *) malloc(size * sizeof(int));
	while (i < size)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
