#include <stdio.h>
#include <assert.h>
#include "PairNumber_To_Color.h"
#include "Color_To_PairNumber.h"
#include "Reference_Manual.h"
#include "testNumberToPair.h"
#include "testPairToNumber.h"

int main() {
	
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    printf("\nDear Technician, Refer Below Manual for Reference\n\n");
    referenceManual(); 

    return 0;
}
