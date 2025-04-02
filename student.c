#include <student.h>
int simple_parentheses(char *str)
{
  int b = 0;
  // TODO: escreva uma expressao para verificar se a string str esta parentisada corretamente.
  while (*str)
  {
    if (*str == '(')
    {
      b++;
    }
    else if (*str == ')')
    {
      b--;
      if (b < 0)
      {
        return 0;
      }
    }
    str++;
  }
  return b;
}
