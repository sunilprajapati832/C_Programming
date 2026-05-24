#include<stdio.h>
int main()
{
  int i=10;
  while(i>=1)
    {
      i=i-4;
      printf("%d",++i);
    }
}
// output: 7 4 1 -2
