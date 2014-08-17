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
