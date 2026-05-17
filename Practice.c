#const keyword errors
#include <stdio.h>
int main()
{
  const int p; // Error: p is constant
  p = 4 ;
  printf("p is %d", p);
  return 0;
}
