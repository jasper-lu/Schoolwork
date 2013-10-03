#include <stdio.h>
#include <stdlib.h>

#define LIM 33000000

void main(int charc, char *charv[])
{
    float s = clock();
    unsigned long int a= atol(charv[1]);
    if(a == 1 || a == 0)
	printf("%d",2);
    unsigned long int i,j;
    int *primes;
    primes = malloc(sizeof(int)*LIM);
    //ugh took me forever to find this way of making a big enough array....
    for (i=3;i<LIM;i+=2)
       primes[i] = 1;
    //sieve of eratoswhatever method. intiaializes everything to 1
    for(i=3;i<LIM;i+=2)
	if(primes[i])
	    for(j=i;i*j<LIM;++j)
		primes[i*j]=0;
    

    j = 2;
    for(i = 1; i<LIM;++i)
    {
	if(primes[i])
	{
	    if(j==a)
	    {
		printf("%d\n",i);
		break;
	    }
	    else
	    {
		++j;
		++i;
	    }
	}
    }
    float e = clock();
    printf("time: %d",(e-s)/100000000);
}
