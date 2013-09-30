#include <stdio.h>

void main() 
{
    int x = 0;
    int y = 199;
    int * p = &x;
    printf("int x val: %d; int x address: %d \n", *p, p);
    printf("int y address: %d \n", &y);
    ++p;
    printf("int y??: %d", *p);
}
//should put in good, detailed error messages
