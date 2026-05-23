#include <stdio.h>

int fact(n) // function definition
{
  if(n==1)
    return 1;
  else
    return n*fact(n-1);
}
int main()
{
  int f;
  f = fact(5); // function call
  printf("\n factorial=%d", f);
  return 0;
}

// output: factorial=120
