#include <cs50.h>
#include <stdio.h>
void printpyramid(int length);
int main(void)
{
    int n = get_int("Enter the Length: ");
    printpyramid(n);
}

void printpyramid(int length)
{
    for (int i = 1 ; i <= length; i++)
    {
        for(int j = i ; j <= length ; j++)
        {
            printf(" ");
        }
        for(int k = i ; k <=length;k++){
            printf("#");
        }
       printf("\n");
    }
}
