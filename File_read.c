#include <stdio.h>
#include <cs50.h>
#include<stdint.h>
int main (int argc , string argv[])
{
    if(argc < 2)
    {
        printf("Error: Enter the File name \n");
        return 1;
    }
    string file = argv[1];
    FILE *f = fopen(file,"r");
    uint8_t buffer[5];
    fread(buffer,4,1,f);

    for(int i =0 ; i<4 ; i ++)
    {
        printf("%i\n",buffer[i]);
    }
    fclose(f);
}
