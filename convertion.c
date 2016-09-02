/*
 * char to int
 */
 
// value in ascii code
char a = 'a';
int ia = (int)a; 
/* note that the int cast is not necessary -- int ia = a would suffice */

// to convert the character '0' -> 0, '1' -> 1, etc, you can write
char a = '4';
int ia = a - '0';
/* check here if ia is bounded by 0 and 9 */


/*
 * int to bitstring
 */
 
void sprintb(char *s, unsigned n) 
{
    unsigned mask = ~(~0u >> 1);
     while (mask) {
        *s++ = n & mask ? '1' : '0';
        mask >>= 1;
    } 
    *s = '\0'; 
}