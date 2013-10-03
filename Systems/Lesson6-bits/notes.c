#include <stdio.h>

void main() 
{
    int A[5] = {1,8,-2,12,32};
    int B[2][3] = {{4,5,7},{9,11,13}};
    //this creates a two by 3 array
    //can access the individual bits (binary) in c. Bits can be important for: compression, bitshifting, etc.
    //RAID = redundant array of independent devices
    //1 byte is 8 bits
    //Parity-bit -> (0) 0 0 0 0 1 1 1
    //the first one is there for checking. I.e. if the parity bit is 1 then it means there's an even number of 1 bits. This makes error-checking easier.
    //Device manufacturers work a lot with bits rather than straight numbers.
    //C was designed so that people didn't have to write programs in assembly or machine language.
    //Traffic light - 5 states: green, yellow, red, blinking red, blinking whatever
    //For the program can link bytes together i.e.
    //_ _ _ _ _ _ _ _ | 0 0 0 0 0 1 1 1
    //7 6 5 4 3 2 1 0   7 6 5 4 3 2 1 0
    //Save traffic lights in states of 3 bits. Can divide into 3s: R(right) 0-1-2, R3-4-5, R6-7-L0.
    //Purpose of linking: save memory (when the program gets very large) and for communications.
    //Where does the parity bit go???
    //A different form of error correction is used.
    //&, |, ~, ^ deal with bits.
    unsigned char a = 7;
    unsigned char b = 12;
    unsigned char w = a & b
    unsigned char x = a | b
    unsigned char y = a ^ b
    unsigned char z = ~a
    
    //Bit-wise &. This generates each bit with conditionals. Returns a 1 bit if both have a 1 bit in that location
    //| - bit wise or
    //^ - exclusive or
    //~ - negator
    //  0 0 0 0 0 0 1 1 1 
    //  0 0 0 0 0 1 1 0 0
    //& 0 0 0 0 0 0 1 0 0
    //| 0 0 0 0 0 1 1 1 1
    //^ 0 0 0 0 0 1 0 1 1 
}
