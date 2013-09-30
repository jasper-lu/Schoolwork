#include <stdio.h>
#include <math.h>
#include <time.h>

int isPrime(int n)
{
    if(n<1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    int root = (int)sqrt(n*1.0);
    int i;
    for(i=3;i<=root;i+=2)
	if(n%i==0)
	    return 0;
    return 1;
}
void main (int argc, char *argv[]){
    clock_t s = clock();
    clock_t e = 0;

    int num = atoi(argv[1]);
    int count = 1;
    int i = 3;
    while(count != num)
    {
	if(isPrime(i))
	{
	    ++count;
	}
	i+=2;
    }
    e = clock();
    printf("%d\n", i-2);
    printf("runtime: %d", e-s);
} 
