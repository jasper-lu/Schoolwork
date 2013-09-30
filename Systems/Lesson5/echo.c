#include <stdio.h>
#include <string.h>

int main(int num, char * charv[]) 
{
    int x;
    for(x = 1; x < num; ++x)
    {
	int y = 0;
	printf("%c", *charv[1]);
/*	
	while(*charv[y] != '\0')
	{
	    int t = *charv[y];
	    if(t > 90)
	    {
		t -= 32;
	    }
	    printf("%c", t);
	}
	*/
    }	
    return 0;
}

