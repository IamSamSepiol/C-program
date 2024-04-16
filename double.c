#include <stdio.h>
#include <cs50.h>

int main ()
{
    int arr[10];
    arr[0] = 1;
    printf("%i\n",arr[0]);
    for(int i=1;i<10;i++)
    {
        arr[i]=arr[i-1]*2;
        printf("%i\n",arr[i]);
    }
}
