#include"random.h"
int TRandom::tRand()
{
    return rand();
}

int TRandom::tRand(int min, int max)
{
    return rand()%(max-min)+min;
}

long double TRandom::fRand()
{
    return rand()/(long double)RAND_MAX;
}

long double TRandom::fRand(int min, int max)
{
    return rand()/(long double)RAND_MAX*(max-min)+min;
}


