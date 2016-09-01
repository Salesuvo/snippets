/*
 * Numerical Recipes in C: The Art of Scientific Computing (William H. Press, Brian P. Flannery, Saul A. Teukolsky, William T. Vetterling; New York: Cambridge University Press, 1992 (2nd ed., p. 277))
 */

// If you want to generate a random integer between 1 and 10, you should always do it by using high-order bits, as in
j=1+(int) (10.0*rand()/(RAND_MAX+1.0));

// and never by anything resembling,(which uses lower-order bits).
j=1+(rand() % 10);

// to yield a pseudo-random number in a [min,max] range:
unsigned int randr(unsigned int min, unsigned int max)
{
    double scaled = rand() / (RAND_MAX + 1.0);
    return (max - min + 1) * scaled + min;
}
