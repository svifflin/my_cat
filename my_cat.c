/*
** my_cat.c for my_cat in /home/darkseb/Documents/etna1/DEVC/my_cat
** 
** Made by Sebastien Vifflin
** Login   <viffli_s@etna-alternance.net>
** 
** Started on  Thu Feb  9 14:39:41 2012 Sebastien Vifflin
** Last update Thu Feb  9 14:39:42 2012 Sebastien Vifflin
*/

#include	<unistd.h>
#include	<string.h>
#include	<strings.h>
#include	"my_cat.h"

# define	BUF_SIZE 30000

void		manuel_mod(char opts[])
{
  char		str[BUF_SIZE];

  while (xread(0, str, sizeof(str)))
    {
      opt_prefix(str, opts);
      write(1, str, my_strlen(str) - 1);
      opt_suffix(str, opts);
      my_putchar('\n');
      bzero(str, my_strlen(str));
    }
}

static void	cat_file(int *fd, char opts[])
{
  char		str[BUF_SIZE];
  char		*line;
  int		readed_octet;
  static char	last_char = 10;

  while (xread(*fd, str, sizeof(str)) > 0)
    {
      line = str;
      while (line && *line)
	{
	  readed_octet = strcspn(line, "\n");
	  if (last_char)
	    opt_prefix(line, opts);
	  write(1, line, readed_octet);
	  if (line[readed_octet])
	    opt_suffix(line + readed_octet, opts);
	  if (line[readed_octet] == '\n')
	    my_putchar('\n');
	  last_char = line[readed_octet];
	  line += readed_octet + 1;
	}
      bzero(str, my_strlen(str));
    }
}

void		auto_mod(char **av, char opts[])
{
  int		i;
  int		fd;

  for (i = 0; av[i]; ++i)
    {
      /*printf("PARAM: '%s' - i: %d\n", av[i], i);*/
      if (av[i][0] == '-')
	continue ;
      if ((fd = xopen(av[i])) > -1)
	cat_file(&fd, opts);
      close(fd);
    }
}
