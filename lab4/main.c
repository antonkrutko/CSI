#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(int argc, char* argv[])
{
    char line[100];
    while (scanf(" %[^\n]", line) ==1)
    {
        if(argc ==1)
            makeUpper(line);
        else
        {
            switch (argv[1][1])
            {
            case 'l' :
            case'L':
                makeLower(line);
                break;
            case 'u' :
            case'U':
                makeUpper(line);
                break;
            case'c':
            case'C':
                makeChange(line);
                break;
            case'n':
            case'N':
                makeName(line);
                break;
            }
        }
        printf("%s",line);
    }
    return 0;
}
