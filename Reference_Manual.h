#ifndef REFERENCE_MANUAL_H__ 
#define REFERENCE_MANUAL_H__

#include "ColorPair.h"
#include "testPairToNumber.h"
#include <stdio.h>
#include "stdbool.h"

int reference_manual;

void printReferencemanual()
{
	int i,j,k=0;
	ColorPair color_pair;

	reference_manual = 1;

	printf("Pair Number\t|\tMajor Color\t|\tMinor Color\n");
	for(i=0;i<numberOfMajorColors;i++)
	{
		color_pair.majorColor = (enum MajorColor)(i);
		for(j=0;j<numberOfMinorColors;j++)
		{
			printf("%d\t\t|\t",++k);
			color_pair.minorColor = (enum MinorColor)(j);
			testPairToNumber(color_pair.majorColor, color_pair.minorColor, k);
			printf("%s\t\t|\t%s\n", MajorColorNames[color_pair.majorColor], MinorColorNames[color_pair.minorColor]);
		}
	}
}

#endif
