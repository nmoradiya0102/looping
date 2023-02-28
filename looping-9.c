#include <stdio.h>
 
int main()
{
  int nbr, i = 1, f = 1;
 
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &nbr);
 
  while(i <= nbr)
  {
      f = f * i;
      i++;
  }
 
  printf("%d! = %ld\n", nbr, f);
 
  return 0;
}
