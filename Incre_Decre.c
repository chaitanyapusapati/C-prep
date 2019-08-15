//prgram for post  and pre Increments and Decrements
#include<stdio.h>
int
main ()
{
  int a = 10, c;
  c = a++ + ++a + --a + a++ + a-- + a++;
  printf ("%d %d", a, c);
}
