#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int			get_next_line(int fd, char **line);
int			ft_strdup_free(const char *s1, char **dest);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
int			ft_sj_ff_dt(const char *s1, const char *s2, char **dest);

#endif