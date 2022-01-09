#ifndef COLOR_TO_PAIRNUMBER_H__ 
#define COLOR_TO_PAIRNUMBER_H__ 

#include "ColorPair.h"


int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

#endif