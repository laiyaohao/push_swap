#include "push_swap.h"

int is_int(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (ft_isdigit(str[i]) == 0)
      return (0);
    i++;
  }
  return (1);
}
