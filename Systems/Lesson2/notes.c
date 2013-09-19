#include <stdio.h>

int main() {
    int x, y, FRED, Z = 12, Q;
    //automatically initializes to no value.
    int b= 8;
    //creates array with 5 spaces in it
    int X = 12;
    Q = 11;
    printf("Answer is: %d and %d \n", Q , X);
    //%d is a variable which is a decimal. Q goes into the first percentage and X goes nto the second percentage.
    char a[7];
    //char is a data type. By donig tihs,, you allocate 7 bytes of memor into an array named s. to make a string:
    char s[4];
    s[0] = 'f';
    s[1] = 'r';
    s[2] = 'e';
    s[3] = 'd';
    //can also do this:
    char r[] = "Fred";
    //this creates an array of chars that makes the word Fred. However, this array takes up 5 bytes: F-r-e-d-null byte.
    //r[] allocates 5 bytes of memory.
    char t[7] = "Fred";
    //This does the same thing as above, but allocates 7 bytes of memory instead.
    //What you see when you look in memory are numerical representations of the values, not the letters.
    //If you print 'A' as a decimal value, you will see the number 65 because you are pritning it's memory value as a decimal.
    //Have to use %c instead of %d to print chars.
    sprintf(a, "%d", 999);
    printf("%c %d", r[4], r[4]);
    //sprintf prints the result into the beginning variable instead of the console. the character array better be big enough to fit the result.
}
