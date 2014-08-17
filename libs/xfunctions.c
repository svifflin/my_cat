#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"../my_cat.h"

size_t		xread(int fd, void *buf, size_t count)
{
  int		size;

  if ((size = read(fd, buf, count)) > -1)
    return (size);
  perror("xread");
  exit(EXIT_FAILURE);
}

int		xopen(const char *pathname)
{
  int		fd;

  if ((fd = open(pathname, O_RDONLY)) > -1)
    return (fd);
  my_puts(1, "cat: ");
  perror((char *)pathname);
  return (-1);
}
