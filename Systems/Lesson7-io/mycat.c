#include <stdio.h>

void main (int charc, char * charv[])
{
    FILE * fp;
    fp = fopen(charv[1], "r");
    char lines[200];
    while(fgets(lines,199,fp))
	printf(lines);
    fclose(fp);

}
