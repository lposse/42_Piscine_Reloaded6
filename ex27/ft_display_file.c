/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lposse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:17:09 by lposse            #+#    #+#             */
/*   Updated: 2024/12/25 19:50:05 by lposse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *argv)
{
	int		fd;
	char	buf[1024];
	ssize_t	bytesleidos;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		write (1, "Cannot read file.\n", 19);
		return ;
	}
	bytesleidos = read(fd, buf, sizeof(buf));
	while (bytesleidos > 0)
	{
		write (1, buf, bytesleidos);
		bytesleidos = read(fd, buf, sizeof(buf));
	}
	if (bytesleidos < 0)
		write (1, "Cannot read file.\n", 19);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc < 2)
			write (1, "File name is missing.\n", 23);
		else
			write (1, "Too many arguments.\n", 21);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
