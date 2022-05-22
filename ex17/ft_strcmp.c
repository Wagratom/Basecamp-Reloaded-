/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:02:51 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 13:08:09 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}
