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
    unsigned char w = a & b;
    unsigned char x = a | b;
    unsigned char y = a ^ b;
    unsigned char z = ~a;
    
    //Bit-wise &. This generates each bit with conditionals. Returns a 1 bit if both have a 1 bit in that location
    //| - bit wise or
    //^ - exclusive or
    //~ - negator
    //  0 0 0 0 0 0 1 1 1 
    //  0 0 0 0 0 1 1 0 0
    //& 0 0 0 0 0 0 1 0 0
    //| 0 0 0 0 0 1 1 1 1
    //^ 0 0 0 0 0 1 0 1 1 
    //
    //CAN STORE ANSWERS IN BITS.
    //Why would you want to store answers in bits rather than bytes??? Because you can store them in 1 Gigabyte, or store the same thing in one eighth of that size -- 128 Megabytes -- using bits.
    //
    //In a bit array:
    //1 0 0 1 0 1 1 0
    //You want to know what is in bit two.
    //You construct a bit with 
    //0 0 0 0 0 1 0 0 -- everything except 2 is zero.
    unsigned char X = 150;
    unsigned char MASK = 4;
    //Mask has only the bit you want to see = 1
    if (X & MASK > 0)
	;
    //By using the bit-wise and, you check whether or not the bit you want is 1 in both.
    //If you wanna set just one bit to either value 1 or value 0. 
    //Can also manipulate bits to make a bit true.
    //make a mask:
    //0 0 0 0 1 0 0 0
    //and the bit array:
    //1 0 0 1 0 0 1 0
    //then, set x = x | MASK.
    //this returns:
    //1 0 0 1 1 0 1 0
    //
    //if you want to make something equal to 0:
    //1 0 0 1 0 1 1 0
    //MASK:
    //1 1 1 0 1 1 1 1 
    //X & MASK returns:
    //1 0 0 0 0 1 1 0 -- the result that you wanted.
    //
    //However, an easier way to do this is to have mask be:
    //0 0 0 1 0 0 0 0. Then, X = X & ~MASK
    //Bit shifting.
    //>> RIGHT-SHIFT and
    //<< LEFT-SHIFT
    //13 -- 0 0 0 0 1 1 0 1
    unsigned char shift  = 13;
    unsigned char lshift = shift << 1;
    //this produces a new value...
    //0 0 0 1 1 0 1 0 = 26.
    //What do you notice???? Left-shift basically multiplies something by two.
    //The trailing bit on the left gets lost and a 0 comes in from the right.
    //Then, can also shift i to the right.
    unsigned char rshift = shift >> 2;
    //produces:
    //0 0 0 0 0 1 1 0 = 6;
    //Right shifting basically divides by two and rounds down.
    //It's eas to create masks this way.
    ONES = 1;
    //Ones is 0 0 0 0 0 0 0 1;
    //then,
    unsigned char mask1 = ONES << 3;
    //would make mask1 = 0 0 0 0 1 0 0 0
    //Don't even need to make the variable. Can just:
    unsigned char mask2 = 1 << 3;
}
