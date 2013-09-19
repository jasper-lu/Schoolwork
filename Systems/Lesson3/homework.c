#include <stdio.h>

void strcpy(char * to, char * from)
{
    int n;
    do
    {
	printf("%c", from[n]);
	to[n] = from[n];
	++n;
    }while(from[n] != '\0');
    
}

void strprint(char * blah)
{
    int x = 0;
    while(blah[x] != (sizeof(blah)/sizeof(blah[0]) - 1))
    {
	printf("%c", blah[x]);
	++x;
    }
}

//char * strcat(char * front, char * end)
char *strcat ( chat *dest, const char * src)
{
    char *d = dest;
    while(*d)
	++d;
    while((*d++= *source++) != '\0')
	;
    return dest;
}
//pointers point to the first thing in an array. the memory codes are next to each other.

int main()
{
    char f [100] = "fred";
    strcat(f, "k");
}

