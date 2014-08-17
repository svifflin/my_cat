#include	"../my_cat.h"

int		my_strlen(char *s)
{
  int		i;

  for (i = 0; s[i]; ++i);
  return (i);
}
