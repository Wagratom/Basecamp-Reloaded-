/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:50:16 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 15:38:20 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 96;
	while (letter++ < 122)
	{
		ft_putchar(letter);
	}
}
