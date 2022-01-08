#ifndef MAJORCOLOR_H__
#define MAJORCOLOR_H__

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

#endif