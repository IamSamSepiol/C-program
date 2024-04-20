#include<stdio.h>
void swap(int *a, int *b);
int main ()
{
    int a = 20;
    int b = 10; 
    printf("%i, %i \n",a,b);
    swap(&a,&b);
    printf("%i, %i \n",a,b);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
