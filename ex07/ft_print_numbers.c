/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:58:37 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 12:58:38 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	numb;

	numb = 47;
	while (++numb <= 57)
	{
		ft_putchar(numb);
	}
}
