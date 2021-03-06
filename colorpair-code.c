#include <stdio.h>
#include "colorpair-code.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair 
GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int 
GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

int
PrintColorcode(void)
{
    int index = 0;
    printf("Pair No.  --   MajorColor  --  MinorColor \n");
    for (index = 0; index < 25; index++)
    {
        printf(" %d  --  %s  --  %s \n",
                index + 1, MajorColorNames[index/5], MinorColorNames[index%5]);
    }
}