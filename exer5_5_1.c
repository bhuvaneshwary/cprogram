#include <stdio.h>

int bhuvana_strcmp(char *s, char *t, size_t n);

int main(void)
{
  char s[100] = "This is the first string";
  char *t = "This is the second string";
  size_t nr_chars = 13;

  int is_equal = bhuvana_strcmp(s, t, nr_chars);

  if (is_equal == 0)
  {
    puts("String s is equal to string t.");
  }
  else if (is_equal > 0)
  {
    puts("String s contains more characters than string t.");
  }
  else if (is_equal < 0)
  {
    puts("String s contains less characters than string t.");
  }

  return 0;
}

int bhuvana_strcmp(char *s, char *t, size_t n)
{
  while ((*s == *t) && --n)
  {
    if (*s == '\0')
      return 0;

    ++s;
    ++t;
  }


  return *s - *t;
}
