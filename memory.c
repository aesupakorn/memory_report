#include <stdio.h>
#include <stdlib.h>

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
} 

int a=10 , b=30 , c;

int main(void)
{
   
    int *ptr = (int*)malloc(1 * sizeof(int));
    int *ptr2 = (int*)malloc(2 * sizeof(int));
    char *ptr3 = (char*) malloc ( sizeof(char) ); 
    factorial(4);
    
    return 0 ;
}