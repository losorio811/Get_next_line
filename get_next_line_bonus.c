/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:37:33 by loosorio          #+#    #+#             */
/*   Updated: 2024/01/30 19:57:25 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buf[FD_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	line = NULL;
	i = 0;
	if (fd < 0 || fd >= FD_MAX || read(fd, 0, 0) < 0 || BUFFER_SIZE < 1)
	{
		while (buf[fd][i])
			buf[fd][i] = '\0';
		return (NULL);
	}
	while ((buf[fd][0]) || read(fd, buf[fd], BUFFER_SIZE) > 0)
	{
		line = ft_joinbuf(line, buf[fd]);
		if (ft_cleanbuf(buf[fd]) == 1)
			break ;
	}
	return (line);
}

/*int main()
{
	char	*linha = NULL;
	int fd = open("test.txt", O_RDONLY);
	while (1)
	{
		linha = get_next_line(fd);
		if (!linha)
			break;
		printf("%s", linha);
		free(linha);
	}
	close(fd);
	return (0);
}*/