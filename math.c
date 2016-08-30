#define INT_CEIL_DIV(x,y) (((x+y)-1)/y)

#define CEILING_POS(X) ((X - (int)(X)) > 0 ? (int)((X)+1) : (int)(X))
#define CHECK_MINMAX(value, min, max) do{if (((value) < (min)) || ((value) > (max))) return OUT_OF_LIMITS;}while(0)
#define MIN(left, right) (((left) < (right)) ? (left) : (right))
#define MAX(left, right) (((left) > (right)) ? (left) : (right))

#define CEILING_NUM(X, Y) ((((int)((X)%(Y))) == 0) ? (X) : ((((int)((X)/(Y))) * (Y)) + (Y)))
#define FLOOR_NUM(X, Y) (((int)((X)/(Y))) * (Y))

AB = Log-1(Log(A)*B)
AB = exp(b ln(a))

abs:

int v;           // we want to find the absolute value of v
unsigned int r;  // the result goes here 
int const mask = v >> sizeof(int) * CHAR_BIT - 1;

r = (v + mask) ^ mask;
r = (v ^ mask) - mask;





