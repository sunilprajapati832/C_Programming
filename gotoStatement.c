// goto statement example 
#include<stdio.h>
int main()
{
  i=1;
  start:
  if(i<=3)
  {
    printf("%d", i);
    i++;
    goto start;
  }
}

// output: 123
