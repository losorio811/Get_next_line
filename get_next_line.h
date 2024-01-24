#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 20
#endif

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_joinbuf(char *line, char *buf);
int		ft_strlen(char *str);
int		ft_cleanbuf(char *buf);
char	*ft_checknl(char *str);

#endif