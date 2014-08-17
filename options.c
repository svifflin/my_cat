/*
** options.c for options in /home/darkseb/Documents/etna1/DEVC/my_cat
** 
** Made by Sebastien Vifflin
** Login   <viffli_s@etna-alternance.net>
** 
** Started on  Thu Feb  9 14:40:09 2012 Sebastien Vifflin
** Last update Thu Feb  9 14:40:10 2012 Sebastien Vifflin
*/

#include	<stdio.h>
#include	"my_cat.h"

void		opt_prefix(char str[], char opts[])
{
  char		s[8];
  static int	line = 1;

  if ((my_strlen(str) > 1 && str[0] != '\n' && opts['b']) ||
      (opts['n'] && !opts['b']))
    {
      sprintf(s, "%6d  ", line);
      my_putstr(s);
      ++line;
    }
}

void		opt_suffix(__attribute__((unused))char str[], char opts[])
{
  if (opts['e'])
    my_putchar('$');
}
