#include <stdio.h>
#include <string.h>
#include <ctype.h>

void makelower(char*line)
{
int i;
for(i=0; i<=strlen(line); i++)
{
putchar(tolower(line));
}
}
void makeupper(char*line)
{
int i;
{
for(i=0; i<strlen(line); i++)
{
putchar(toupper(line));
}
}
}
void makechange(char*line)
{
int i;
    for(i=0; i<strlen(line); i++);
    {
     if (isupper(line))
     {
      putchar(toupper(line));
     }
     else
     putchar(toupper(line));
    }
}
    void makeName (char*line)
{
int i;
for(i=1; i<strlen(line); i++)
{
putchar(toupper(line[0]));
putchar(tolower(line[i]));
}
}
int main (int argc, char*argv[])
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
case 'l' : case'L':
makelower(line);
break;
case 'u' : case'U':
makeupper(line);
break;
case'c': case'C':
makeChange(line);
break;
case'n': case'N':
makeName(line);
break;
}
}
printf("%s",line);
return 0;
}
}
