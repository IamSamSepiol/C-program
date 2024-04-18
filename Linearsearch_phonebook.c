#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    typedef struct{
         string name;
         string number;
      }
      person;
      string s = get_string("Name: ");
      person people[3];
      people[0].name = "Samsepiol";
      people[0].number = "9928282833";
      people[1].name = "Elliot";
      people[1].number = "9928282833";
      people[2].name = "DARLENE";
      people[2].number = "9928282833";

    for (int i =0; i<3; i++)
    {
        if(strcmp(people[i].name,s)==0)
        {
            printf("Found %s\n", people[i].number);
        }

    }
    printf("Not Found");
    }

