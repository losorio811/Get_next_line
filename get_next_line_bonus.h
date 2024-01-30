/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:39:54 by loosorio          #+#    #+#             */
/*   Updated: 2024/01/30 19:55:50 by loosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# ifndef FD_MAX
#  define FD_MAX 5
# endif

char	*get_next_line(int fd);
char	*ft_joinbuf(char *line, char *buf);
int		ft_strlen(char *str);
int		ft_cleanbuf(char *buf);
char	*ft_checknl(char *str);

#endif