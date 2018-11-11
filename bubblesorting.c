#include <stdio.h>
#include <conio.h>

int main()
{
  int a[10] , i , j , n , temp ;
  printf("enter the no of elements\t") ;
  scanf("%d", &n) ;
  for(i = 0 ; i < n ; i++)
  {
    scanf("%d", &a[i]) ;
  }
  for(i = 0 ; i< n ; i++)
  {
    for(j = 0 ; j < n-1 ; j++)
    {
      if ( a[j] > a[j + 1] )
      {
        int temp = a[j] ;
        a[j] = a[j + 1] ;
        a[j + 1] = temp ;
      }
    }
  }
  printf("sorted elements are\t") ;
  for(i = 0 ; i < n ; i++)
  {
    printf("%d\t", a[i]) ;
  }
  getch();
  return 0 ;
}