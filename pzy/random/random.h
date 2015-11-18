#ifndef RANDOM
#define RANDOM
#include"stdlib.h"
#include"time.h"
class TRandom
{
public:
    TRandom(unsigned int s=(unsigned int)time(0)){srand(s);}
    int tRand();
    int tRand(int min,int max);
    long double fRand();
    long double fRand(int min,int max);
private:
    unsigned int seed;
};

#endif // RANDOM

