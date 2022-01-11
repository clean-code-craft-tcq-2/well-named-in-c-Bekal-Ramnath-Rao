#ifndef REFERENCE_MANUAL_H__ 
#define REFERENCE_MANUAL_H__

#include "ColorPair.h"
#include <stdio.h>

void Reference_Manual()
{
	int i,j,k=0;
	ColorPair color_pair;


	printf("Pair Number\t|\tMajor Color\t|\tMinor Color\n");
	for(i=0;i<numberOfMajorColors;i++)
	{
		color_pair.majorColor = (enum MajorColor)(i);
		for(j=0;j<numberOfMinorColors;j++)
		{
			printf("%d\t\t|\t",++k);
			color_pair.minorColor = (enum MinorColor)(j);
			printf("%s\t\t|\t%s\n", MajorColorNames[color_pair.majorColor], MinorColorNames[color_pair.minorColor]);
		}
	}
}

#endif