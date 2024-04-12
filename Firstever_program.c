#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");
    int phn_no = get_int("Phone Number :");
    printf("Name: %s\n PhoneNumber:%i\n", name , phn_no );
}

