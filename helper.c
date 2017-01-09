#define VARIABLE_UNUSED(name) (void)name

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof((array)[0]))

#define IS_IN_RANGE(lower,n,upper) (((lower) <= (n)) && ((n) <= (upper)))

inline bool isInRange(int lower, int n, int upper);
inline bool isInRange(int lower, int n, int upper)
{
   return (lower <= n) && (n <= upper);
}

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

inline int smoothInt(int i, int modifier);
inline int smoothInt(int i, int modifier)
{
   int temp = (i + (modifier/2)) / modifier;
   return(temp * modifier);
}

inline float roundFloatWithPrecision(float f, unsigned int precision);
inline float roundFloatWithPrecision(float f, unsigned int precision)
{
#ifdef __cplusplus
   float multiplier = pow (10, static_cast<float>(precision));
#else /* not __cplusplus */
   float multiplier = pow (10, (float)precision);
#endif /* __cplusplus */
   return floorf(f * multiplier + 0.5F) / multiplier;
}

// halt macros
#ifdef NDEBUG
   #define HALT() \
      do \
      { \
      } \
      while (0)
#else /* DEBUG */
   #define HALT() \
      do \
      { \
         halt(__FILE__, __LINE__, 0, ""); \
      } \
      while (0)
#endif /* DEBUG */
