#include <stdio.h>

typedef struct NameValue NV;

struct NameValue{
    char *name;
    char *value;
};


char* ReadStdin()
{
    char* input = malloc(301);
    fread(*input, 1, 300, stdin);
    return input;
}

NV* ParseInput(char* input)
{
    //goes through input;
    //takes out the pipes and replaces them with null bytes
    //ddoes the same for colons
    int i_nvCount;
    char* cFR;
    for(i_nvCount = 0; *cFR != '\0'; ++cFR)
    {
	if(*input == '|')
	{
	    if(i_nvCount % 2 == 0)
		*input = '\0';
	    i_nvCount++;
	}else if(*input == ':'){
	    *input = '\0';
	}
    }
    i_nvCount/=2;

    NV* ret = malloc(sizeof(*NV) * i_nvCount);
    cFR++ = input;

    while(i_nvCount > 0)
    {	
	ret[i_nvCount - 1].name = cFR;
	while(*cFR != '\0')
	   ++cFR; 
	cFR += 2;

	ret[i_nvCount - 1].value = cFR;
	while(*cFR !- '\0')
	    ++cFR;
	cFR += 2;

	--i_nvCount;
    }
    return ret;
}

int main()

    return 0;
}
