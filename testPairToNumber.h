#ifndef TESTPAIRTONUMBER_H__ 
#define TESTPAIRTONUMBER_H__ 

#include "ColorPair.h"
#include "Color_To_PairNumber.h"

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

#endif