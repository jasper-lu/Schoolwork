#include <stdio.h>
#include <stdlib.h>

void print_size(int* x)
{
    printf("%d", sizeof(x));
}
void max_malloc();
void multiMatrix();
unsigned char SetBit(unsigned char data, int bit_position, int value);

void main()
{
    /*
    int a[3][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}
    };
    int b[3][3] = {
	{10,11,12},
	{13,14,15},
	{16,17,18},
    };
    multiMatrix(a,b);
    */
    unsigned char d = 5;
    d = SetBit(d,1,1);
    printf("%d ", d);
    d = SetBit(d,2,0);

    printf("%d", d);
}

unsigned char SetBit(unsigned char data, int bit_position, int value)
{
    unsigned char shift = 1 << bit_position; 
    if(value==0)
	return data & ~shift; 
    else
	return data | shift;
}
void multiMatrix(int a[3][3], int b[3][3])
{
    int r; 
    int c;
    int ret[3][3];

    for(r=0;r!=3;++r){
	for(c=0;c!=3;++c){
	    ret[r][c] = 0;
	    int s;
	    for(s=0;s!=3;++s){
		int t = ret[r][c];
		int t1= a[r][s];
		int t2= b[s][c];
		ret[r][c] = t + t1*t2;
	    }
	}
    }
    for(r = 0;r!=3;++r)
    {
	for(c=0;c!=3;++c)
	{
	    printf("%d ", ret[r][c]);
	}
	printf("\n");
    }
}

void max_malloc()
{
    int *n;
    while(1)
    {
	n = malloc(4);
	printf("%d", sizeof(n));
	if(!n)
	    break;
    }
}
