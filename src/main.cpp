#include "symbian_ui.h"
#include "psx_cpu.h"
#include "psx_gpu.h"
#include "frameskip.h"

int E32Main()
{
    InitUI();
    InitPSX();
    while(1)
    {
        RunFrame();
        RenderFrame();
        ApplyFrameSkip();
    }
    return 0;
}
