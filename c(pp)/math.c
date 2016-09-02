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
 *  Useful definitions using PI
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

// vs.

float roundIntWithPrecision(int i, unsigned int precision)
{
#ifdef __cplusplus
   float multiplier = pow (10, static_cast<float>(precision));
   return static_cast<int>(floorf(static_cast<float>(i) * multiplier + 0.5F) / multiplier);
#else /* not __cplusplus */
   float multiplier = pow (10, (float)precision);
   return (int)(floorf((float)i * multiplier + 0.5F) / multiplier);
#endif /* __cplusplus */
}

float roundFloatWithPrecision(float f, unsigned int precision)
{
#ifdef __cplusplus
   float multiplier = pow (10, static_cast<float>(precision));
#else /* not __cplusplus */
   float multiplier = pow (10, (float)precision);
#endif /* __cplusplus */
   return floorf(f * multiplier + 0.5F) / multiplier;
}
