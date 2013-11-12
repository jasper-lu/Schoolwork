#include <stdio.h>

int main()
{
    //open up a file for reading or writing & what to do
    //fopen(filename, mode) -- file open
    //filename = the name of the file
    //mode = reading writing or appending
    //the above function returns a file pointer.
    FILE *fp;
    fp = fopen ("blah", "r");
    // errors - file not in curr directory, not able to read, wrong name
//    printf("%c",fp);
    //fgetc(FILE p) gets another character from the file every time you call it.
    //fgets(char * s, int n, FILE *fp) will
    char line[200];
    int  character;
    character = fgetc(fp);
    fgets(line, 199, fp);
    printf("%c", character);
    printf(line);
}
