inline bool isOdd(int n);
inline bool isOdd(int n)
{
   return (n & 1) != 0;
}

inline bool isEven(int n);
inline bool isEven(int n)
{
   return (n & 1) == 0;
}

A^B = Log-1(Log(A)*B)
A^B = exp(b ln(a))

abs:

int v;           // we want to find the absolute value of v
unsigned int r;  // the result goes here 
int const mask = v >> sizeof(int) * CHAR_BIT - 1;

r = (v + mask) ^ mask;
r = (v ^ mask) - mask;

/**
 * 	Useful definitions using PI
 */

#ifndef PI
 #define PI         (4*atan(1))
#endif

#define deg2rad(d) ((d)*PI/180)
#define rad2deg(r) ((r)*180/PI)

/**
 * round a number n to e digits
 */

#define floatRound(n,e) (floor((n) * pow(10.F,(e))+0.5F) / pow(10.F,(e)))
