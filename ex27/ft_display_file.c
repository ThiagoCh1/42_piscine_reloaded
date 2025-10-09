/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:21:52 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/09 11:51:58 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	print_error(char *msg)
{
	int	i;

	i = 0;
	while (msg[i])
		i++;
	write(2, msg, i);
}

void	display_file(int fd)
{
	char	buffer[BUF_SIZE];
	int		bytes_read;

	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
	{
		print_error("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		print_error("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Cannot read file.\n");
		return (1);
	}
	display_file(fd);
	close(fd);
	return (0);
}
