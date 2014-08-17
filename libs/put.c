/*
** put.c for put in /home/darkseb/Documents/etna1/DEVC/my_cat/libs
** 
** Made by Sebastien Vifflin
** Login   <viffli_s@etna-alternance.net>
** 
** Started on  Thu Feb  9 14:40:48 2012 Sebastien Vifflin
** Last update Thu Feb  9 14:40:48 2012 Sebastien Vifflin
*/

#include	<stdio.h>
#include	<unistd.h>
#include	"../my_cat.h"

void		my_putstr(char *s)
{
  int		i;

  for (i = 0; s[i]; ++i)
    my_putchar(s[i]);
}

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_puts(int fd, char *s)
{
  write(fd, s, my_strlen(s));
}
