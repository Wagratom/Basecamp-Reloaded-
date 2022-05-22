/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:03:12 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 13:03:19 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_arguments(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (argv[++i])
	{
		while (argv[i][++j])
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
		j = -1;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		print_arguments(argv);
	return (0);
}
