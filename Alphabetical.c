#include<stdio.h>
#include<cs50.h>
#include <string.h>
int main()
{
    string letter = get_string("Enter the Phrase: ");
    int length = strlen(letter);
    for (int i=0;i<length-1;i++)
    {
        if(letter[i] > letter[i+1])
        {
            printf("Not in alphabetical order! \n");
            return 0;
        }
    }AC
    printf("The letter is in alphabetical order! \n");
    return 0;
}
