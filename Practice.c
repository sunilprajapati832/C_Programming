/*
  #const keyword errors
#include <stdio.h>
int main()
{
  const int p; // Error: p is constant
  p = 4 ;
  printf("p is %d", p);
  return 0;
}
*/

#include <stdio.h>
int main()
{
  for(i=6; i<=10; i+=2)
    {
      if (i!=2)
        printf("%d",i);
    }
} 
// output : 6 8 10
