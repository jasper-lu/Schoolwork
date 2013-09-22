#include <stdio.h>
void main(int argc, char *argv[])
//arg c is incorporated to equal the size of argv
{
    int i;
    for (i = 0; i < argc; ++i)
	printf("argv[%d]: %s\n", i, argv[i]);
    //can pu the stuff inside the array, blah. %s means string.
}
