/*
** xfunctions.c for xfunctions in /home/darkseb/Documents/etna1/DEVC/my_cat/libs
** 
** Made by Sebastien Vifflin
** Login   <viffli_s@etna-alternance.net>
** 
** Started on  Thu Feb  9 14:40:59 2012 Sebastien Vifflin
** Last update Thu Feb  9 14:41:00 2012 Sebastien Vifflin
*/

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
