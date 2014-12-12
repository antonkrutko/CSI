#include "functions.h"


void makeLower(char*line)
{
    int i;
    for(i=0; i <= strlen(line); i++)
    {
        char resultChar = (char) tolower( (int) *(line+i) );
        printf("%c", resultChar);
    }

    printf("\n");
}

void makeUpper(char*line)
{
    int i;
    {
        for(i=0; i<strlen(line); i++)
        {
            putchar( toupper(line) );
        }
    }
}

void makeChange(char*line)
{
    int i;
    for(i=0; i < strlen(line); i++);
    {
        if ( isupper(line) )
        {
            putchar( toupper(line) );
        }
        else
            putchar( toupper(line) );
    }
}

void makeName (char*line)
{
    int i;
    for(i=1; i<strlen(line); i++)
    {
        putchar( toupper( line[0] ) );
        putchar( tolower( line[i] ) );
    }
}
