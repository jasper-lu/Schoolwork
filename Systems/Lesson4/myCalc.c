#include <stdio.h>

int main(int argc, char * argv[] )
{

/*    if(af != a || bf != b)
    {
	printf("At least one of these arguments is illegal or immoral");
	return -1;
    }
*/
    if(!argv[0] || !argv[1] || !argv[2])
    {
	printf("More arguments please."); 
	return -1;
    }

    if(argv[4])
    {
	printf("Too many.");
	return -1;
    }

    int a = *argv[1] - '0';
    int b = *argv[3] - '0';

    switch (*argv[2])
    {
	case '+':
	    printf("%d", a+b);
	    break;
	case '-':
	    printf("%d", a-b);
	    break;
	case '/':
	    if(b == 0)
		printf("You can't make me divide by zero. Nice try.");
	    else
		printf("%d", a/b);
	    break;
    }

    return 0;
}

void mystrcpy(char * to, char * from)
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
char *mystrcat ( char *dest, const char * src)
{
    char *d = dest;
    while(*d)
	++d;
    while((*d++= *src++) != '\0')
	;
    strprint(dest);
    return dest;
}
