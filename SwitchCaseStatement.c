#include<stdio.h>
int main()
{
  switch (2)
    {
      case 1: printf("one");
              break;
      case 3: printf("Three");
              break;
      case 2: printf("Two");
      case 6: printf("Six");
    }
  retrun 0;
}
// output: TwoSix
