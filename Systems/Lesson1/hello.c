#include <stdio.h>

void main() {
    int i, n,gtfo;
    long a = -102, b;
    int xy[2]0;
    xy[5] = -2;
    xy[0] = 12;
    xy[20] = 3;
    //this would normally make an out of bounds error, but not in c. Instead, what happens here is that it adds to another piece of memory, with a reference x[20]. However, that piece of memory may have already been allocated to a different variable, which would cause a "hidden" error. C doesn't check for errors here becasue it is built for absolute efficiency. 
}
