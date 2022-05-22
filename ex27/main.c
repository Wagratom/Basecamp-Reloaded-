/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:24:16 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/18 15:58:09 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	read_file(char **argv)
{
	char	buffer[4096];
	int		size;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	size = 1;
	while (size)
	{
		size = read(fd, buffer, 4096);
		if (size == -1)
			return (1);
		write(2, buffer, size);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		read_file(argv);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		write(2, "File name missing.\n", 19);
	return (0);
}
