#include "frameskip.h"

int frameCounter = 0;

void ApplyFrameSkip() 
{
    frameCounter = (frameCounter + 1) % 2; // skip every other frame
}
