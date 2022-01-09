#ifndef REFERENCE_MANUAL_H__ 
#define REFERENCE_MANUAL_H__

#include "PairNumber_To_Color.h"
#include "Color_To_PairNumber.h"
#include "ColorPair.h"
#include <stdio.h>

void Reference_Manual()
{
	ColorPair* colorpair_manual;
	int i;
	char colorPairNames1[MAX_COLORPAIR_NAME_CHARS];
	for(i=1;i<=25;i++)
	{
		*colorpair_manual = GetColorFromPairNumber(i);
		printf("%s %s",
        MajorColorNames[colorpair_manual->majorColor],
        MinorColorNames[colorpair_manual->minorColor]);
    	//ColorPairToString(&colorpair, colorPairNames1);
    	//printf("%s\n", colorPairNames1);
	}
}

#endif