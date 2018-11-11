#include <stdio.h>
#include <conio.h>

int main()
{
  int a[5] , i , j , min , index ;
  printf("enter the elements\t") ;
  for(i = 0 ; i < 5 ; i++)
  {
    scanf("%d", &a[i]) ;
    printf("\t") ;
  }
  for(i = 0 ; i < 5 ; i++)
  {
    min = a[i] ;
    index = i ;
    for(j = i+1 ; j < 5 ; j++)
    {
      if(min < a[j])
      {
        min = a[j] ;
        index = j ;
      }
    }
    a[index] = a[i] ;
    a[i] = min ;
  }
  printf("the sorted elements are\t") ;
  for(i = 0 ; i < 5 ; i++)
  {
    printf("%d", a[i]) ;
    printf("\t") ;
  }
  getch();
  return 0;
}