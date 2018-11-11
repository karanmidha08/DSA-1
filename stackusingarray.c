#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void push(int) ;

int pop() ;

void display() ;

int stack[10] ;

int top = -1 ;

int main()
{
  int ch , i , item ;
  while(1)
  {
    printf("choose one \n1. Push\n2. Pop \n3. Display \n4. exit \n") ;
    scanf("%d",&ch) ;
    switch(ch)
    {
      case 1 :
              printf("Enter the item\n") ;
              scanf("%d", &item) ;
              push(item) ;
              break ;
      case 2 :
              printf("poped item is %d \t", pop()) ;
              break ;
      case 3 :
              display() ;
              break ;
      case 4 :
             exit(0) ;
    }
  }
}

void push(int item)
{
  if(top == 9)
   printf("Stack overflow\n") ;
  else
   {
     top++ ;
     stack[top] = item ;
   }
}
int pop()
{
  int n ;
  if(top < 0)
   {
     printf("stack uderflow") ;
     return n ;
   }
  else
   {
     n = stack[top] ;
     top-- ;
     return n ;
   }
}
void display()
{
  int i ;
  printf("elements of stack are\n") ;
  for(i = top ; i >= 0 ; i--)
  {
    printf("%d \t", stack[i]) ;
  }
}