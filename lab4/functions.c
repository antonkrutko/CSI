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
    for(i=0; i<strlen(line); i++)
    {
        char resultChar = (char) toupper( (int) *(line+i) );
        printf("%c", resultChar);
    }
    printf("\n");
}

void makeChange(char*line)
{
    int i;
    for(i=0; i < strlen(line); i++);
    {
        if ( isupper(line) != 0 )
        {
            char resultChar = (char) tolower( (int) *(line+i) );
        }
        else
        {
            char resultChar = (char) toupper( (int) *(line+i) );
        }
    }
    printf("%c", resultChar);
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
