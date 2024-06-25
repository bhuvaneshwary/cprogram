#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main(void)
{
  char *s = "This is a string";
  char *t1 = "string";
  char *t2 = " string";

 
  if (strend(s, t1))
    puts("The string t1 orrurs at the end of the string s.");
  else
    puts("The string t1 doesn't orrur at the end of the string s.");

  
  if (strend(s, t2))
    puts("The string t2 orrurs at the end of the string s.");
  else
    puts("The string t2 doesn't orrur at the end of the string s.");

  return 0;
}

int strend(char *s, char *t)
{
  
  size_t s_length = strlen(s);
  size_t t_length = strlen(t);

  
  s += s_length - 1;
  t += t_length - 1;

  
  while (t_length && (*s-- == *t--))
    --t_length;

  if (t_length)
    return 0;

  return 1;
}
