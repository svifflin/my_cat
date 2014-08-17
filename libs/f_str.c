/*
** f_str.c for f_str in /home/darkseb/Documents/etna1/DEVC/my_cat/libs
** 
** Made by Sebastien Vifflin
** Login   <viffli_s@etna-alternance.net>
** 
** Started on  Thu Feb  9 14:40:35 2012 Sebastien Vifflin
** Last update Thu Feb  9 14:40:35 2012 Sebastien Vifflin
*/

#include	"../my_cat.h"

int		my_strlen(char *s)
{
  int		i;

  for (i = 0; s[i]; ++i);
  return (i);
}
