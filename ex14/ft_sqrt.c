/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:59:44 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 12:59:45 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < 46341)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
