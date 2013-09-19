#include <string.h>
#include <stdio.h>
int main() {
    char s[7] = "FRED";
    //F R E D \0 ? ?
    //\0 = null byte
    //strlen(s) = 4
    char t[9];
    strcpy(t,s);
    //this makes t = F R E D \0 _ _ _ _ 
    strcmp(t, s);
    //this compares the two strings and sees which comes earlier in ascii order (backend)
    //returns -1, 0, or 1
    //0 means they are equal. strcmp(t,s) returns 0 because the null bye signifies the end of a string
    //-1 means t is earlier in ascii than s (alphabetical order)
    //1 means s is in front of t
    //will be true alphabetical order if everything is uppercase or if everything is lowercase
    printf(s);
}
