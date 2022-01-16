#ifndef TESTPAIRTONUMBER_H__ 
#define TESTPAIRTONUMBER_H__ 

#include "ColorPair.h"
#include "Color_To_PairNumber.h"
#include "Reference_Manual.h"
#include <assert.h>

extern int reference_manual ;

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    if(!reference_manual) //print only if pair is not tested from reference manal
    {
    	printf("Got pair number %d\n", pairNumber);
    }
    assert(pairNumber == expectedPairNumber);
}

#endif