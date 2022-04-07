#ifndef LIBASM_H
# define LIBASM_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(char *dst, const char *src);
size_t	ft_write(int fd, const void *buf, size_t n);
size_t	ft_read(int fd, const void *buf, size_t n);
char	*ft_strdup(char *str);

#endif
