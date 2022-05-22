/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:04:20 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/22 02:22:39 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	output(char **argv)
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

void	alphabet_order(char **argv)
{
	char	*aux;
	int		i;
	int		j;
	int		rtn;

	i = 0;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			rtn = ft_strcmp(argv[i], argv[j]);
			if (rtn > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
		}
	}
	argv[i] = '\0';
	output(argv);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		alphabet_order(argv);
	return (0);
}
