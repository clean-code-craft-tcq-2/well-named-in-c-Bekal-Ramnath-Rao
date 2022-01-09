#ifndef PAIRNUMBER_TO_COLOR_H__ 
#define PAIRNUMBER_TO_COLOR_H__ 

#include "ColorPair.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    printf("%d\n",colorPair.majorColor);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    printf("%d\n",colorPair.minorColor);
    printf("OK Jaanu\n");
    return colorPair;
}

#endif