//Prgram for reversing a given number
#include<stdio.h>
int main ()
{
  int  n=0, rev=0, r=0, sn=0;
  scanf ("%d", &n);
  sn = n;
  while (n)
    {
      r = n % 10;
      rev = (rev * 10) + r;
      n = n / 10;
    }
  printf ("the reverse of the given %d is %d ", sn, rev);
}

