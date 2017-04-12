// use the bitwise OR operator (|) to set a bit. That will set bit x.
number |= 1 << x;

// Clearing a bit, use the bitwise AND operator (&) to clear a bit.
// That will clear bit x. You must invert the bit string with the bitwise NOT operator (~), then AND it.
number &= ~(1 << x);

// Toggling a bit. The XOR operator (^) can be used to toggle a bit.
number ^= 1 << x;

// Checking a bit, shift the number x to the right, then bitwise AND it. That will put the value of bit x into the variable bit.
bit = (number >> x) & 1;

// Setting the nth bit to either 1 or 0 can be achieved with the following:
number ^= (-x ^ number) & (1 << n);

uint32_t NumberOfSetBits(uint32_t i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
