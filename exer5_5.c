#include <stdio.h>
#include <string.h>

void bhuvana_strcat(char *s, char *t, size_t n);

int main(void)
{
  char s[100] = "This is the first string";
  char *t = ", this is second string!";
  size_t nr_chars = 5;

  bhuvana_strcat(s, t, nr_chars);

  puts(s);

  return 0;
}

void bhuvana_strcat(char *s, char *t, size_t n)
{
  size_t s_length = strlen(s);

  s += s_length;

  while ((*s++ = *t++) != '\0' && n--)
    ;
}
