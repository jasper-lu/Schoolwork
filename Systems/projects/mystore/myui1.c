#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *name;
    char *value;
}NV;

char* ReadStdin()
{
    char* input = malloc(301);
    fread(input, 1, 300, stdin);
    input[300] = '\0';
    return input;
}

NV* ParseInput(char* input, int* c)
{
    //goes through input;
    //takes out the pipes and replaces them with null bytes
    //ddoes the same for colons
    int i_nvCount = 0;
    char* cFR = input;

    ++i_nvCount;
    ++cFR;

    while(*cFR != '\0')
    {
	if(*cFR == '|')
	{
	    *cFR = '\0';
	    ++cFR;
	    while(*cFR == ' ' || *cFR == '\n') *cFR = '\0';	/*
	    if(i_nvCount % 2 == 1)
		*(++cFR) = '\0';
		*/
	    i_nvCount++;
	}else if(*cFR == ':'){
	    *cFR = '\0';
	    ++cFR;
	    *cFR = '\0';
	}
	++cFR;
    }

    i_nvCount/=2;

    NV* ret = malloc(sizeof(NV) * i_nvCount);
    cFR = input;
    ++cFR;
    *c = i_nvCount;

    while(i_nvCount > 0)
    {	
	//printf("%d\n", i_nvCount);
	ret[i_nvCount - 1].name = cFR;
	//printf(ret[i_nvCount - 1].name);
	while(*cFR != '\0')
	{
//	    printf("i_nvCount: %d\n", i_nvCount);
	   ++cFR; 
	}
	while(*cFR == '\0')
	    ++cFR;

	ret[i_nvCount - 1].value = cFR;
	//printf(ret[i_nvCount - 1].value);
	while(*cFR != '\0')
	{
	    ++cFR;
	}
	while(*cFR == '\0')
	    ++cFR;

	--i_nvCount;
    }

    return ret;
}

int main()
{
    char * input = ReadStdin();
    int *size = malloc(sizeof(int));;
    NV* stuff = ParseInput(input,size);

    while(*size > 0)
    {
	printf(stuff->name);
	printf(" = ");
	printf(stuff->value);
	printf("\n");
	++stuff;
	--*size;
    }
    return 0;
}
