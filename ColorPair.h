#ifndef COLORPAIR_H__
#define COLORPAIR_H__

#include "MajorColor.h"
#include "MinorColor.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif