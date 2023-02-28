#include<stdio.h>

int main()
{
	int n,i,fact=1;
	
	printf("Enter last number=");
	scanf("%d",&n);
	 i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("fact=%d",fact);
	return 0;
}

//#include <stdio.h>
// 
//int main()
//{
//  int nbr, i = 1, f = 1;
// 
//  printf("Enter a number to calculate its factorial: ");
//  scanf("%d", &nbr);
// 
//  while(i <= nbr)
//  {
//      f = f * i;
//      i++;
//  }
// 
//  printf("%d! = %ld\n", nbr, f);
// 
//  return 0;
//}
