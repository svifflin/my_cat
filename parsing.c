#include	<stdlib.h>
#include	<string.h>
#include	"my_cat.h"

char		*get_next_params(char **av, char reset)
{
  static int	c = 0;

  if (reset == 1)
    return (av[c = 0]);
  if (av[c])
    return (av[c++]);
  return (NULL);
}

static void	fill_opts(char *param, char opts[])
{
  int		i;

  for (i = 0; param[i]; ++i)
    {
      if (strchr(OPTIONS, param[i]))
	opts[(int)param[i]] = 1;
      else
	usage();
    }
}

int		check_opts(char **av, char opts[])
{
  int		nb_param;
  char		*param;

  get_next_params(av, 1);
  for (nb_param = 0; (param = get_next_params(av, 0)); ++nb_param)
    {
      if (param[0] == '-')
	{
	  fill_opts(param + 1, opts);
	  --nb_param;
	}
    }
  return (nb_param);
}
