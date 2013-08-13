#ifndef _SMART_PLUGIN
#define _SMART_PLUGIN

typedef void (*_SMARTGetMousePos)(int &x, int &y);
typedef void (*_SMARTSetCapture)(bool enabled);

typedef struct
{
    int version; //Version of SMART to ensure binary compatibility
    void *img, *dbg; //Pointer to the memory location of the img (to simba) and dbg (from simba) colors
    int width, height; //Dimensions of client
    _SMARTGetMousePos getMousePos; //Callback to get the current fake mouse position
    _SMARTSetCapture setCapture; //Callback to turn set SMART's capture mode
} SMARTInfo;

typedef void (*_SMARTPluginInit)(SMARTInfo *ptr);

extern SMARTInfo* SmartGlobal;
void BltSmartBuffer();


#endif