#include <stdio.h>
char * strfind (char *, char);
char * strsend (char *, char);
char * strup (char *);

int main ()
{
    char bob [] = "jelly";
    printf("%c", *strfind(bob, 'l'));
    return 0;
}

char * strup (char * s)
{
    char * r = s;
    while ( *s != '\0' )
    {
	if(*s >= 'a' && *s <= 'z')
	{
	    *s -= ' ';
	}
	++s;
    }
    return r;
}

char * strfind (char * s, char c)
{
    while (*s != '\0')
    {
	if(*s == c)
	    return s;
	++s;
    }
    return '\0';
}

char * strsend (char * s, char * l)
{
}
