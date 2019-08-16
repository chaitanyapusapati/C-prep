//Program to multiply two numbers in lowest step counts 
#include<stdio.h>
int
main ()
{
  int a, b, mul = 0, n1 = 0, n2 = 0, count = 0;
  scanf ("%d %d", &a, &b);
  if (a > b)
    {
      n1 = a;
      n2 = b;
    }

  else
    {
      n1 = b;
      n2 = a;
    }


  while (n2)
    {
      count++;
      mul = mul + n1;
      n2--;
    }
  printf ("%d x %d is %d\n", a, b, mul);
}
