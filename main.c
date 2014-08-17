#include	<errno.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"my_cat.h"

void		usage()
{
  my_puts(2, "USAGE: ./my_cat [-bne] [files ...]\n");
  exit(EXIT_FAILURE);
}

static void	initialize_opts(char opts[3])
{
  int		i;

  for (i = 0; OPTIONS[i]; ++i)
    opts[(int)OPTIONS[i]] = 0;
}

int		main(__attribute__((unused))int ac, char **av)
{
  int		nb_files;
  char		opts[3];

  initialize_opts(opts);
  nb_files = check_opts(av + 1, opts);
  if (!nb_files)
    manuel_mod(opts);
  else
    auto_mod(av + 1, opts);
  return (0);
}
