#include <stdio.h>   
#include <stdlib.h>  
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n*factorial(n-1));  
}   
int main()  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  if (scanf("%d",&number)!=1)
  {
    printf("Invalid input. Please enter a valid integer.\n");
    exit(1);  
  }  
  fact=factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
  return 0;  
}
