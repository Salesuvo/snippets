/*
 * Numerical Recipes in C: The Art of Scientific Computing (William H. Press, Brian P. Flannery, Saul A. Teukolsky, William T. Vetterling; New York: Cambridge University Press, 1992 (2nd ed., p. 277))
 */

     // ToDo: check for using stdlib here is memory save
 
// if you want to generate a random integer between 1 and 10, you should always do it by using high-order bits, as in
myRandomNumber = 1 + (int)(10.0F * rand() / (RAND_MAX + 1.0F));

// and never by anything resembling,(which uses lower-order bits).
myRandomNumber = 1 + (rand() % 10);

// to yield a pseudo-random number in a [min,max] range:
unsigned int randr(unsigned int min, unsigned int max)
{
    // from YON1: think about using srand() here

    double scaled = rand() / (RAND_MAX + 1.0F);
    return (max - min + 1) * scaled + min;
}
