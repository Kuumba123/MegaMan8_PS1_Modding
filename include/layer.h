#ifndef LAYER_H
#define LAYER_H
#include <stdbool.h>
#include <sys/types.h>

typedef unsigned char   undefined;
typedef unsigned char    byte;

typedef struct { /* BG Layer Defonation */
    bool display;
    u_char scrollType;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    byte priority;
    short x;
    short y;
    short pastX;
    short pastY;
    short baseX; /* mainly for layer 2 & 3 */
    short baseY;
    short borderR; /* cam borders */
    short borderL;
    short borderB;
    short borderT;
    ushort autoBorderR; /* right side border for auto scroller */
    ushort autoBorderL;
    undefined field18_0x1e;
    undefined field19_0x1f;
    undefined field20_0x20;
    undefined field21_0x21;
    undefined field22_0x22;
    undefined field23_0x23;
    undefined field24_0x24;
    undefined field25_0x25;
    ushort autoSpeedX;
    ushort autoSpeedY;
    undefined field28_0x2a;
    undefined field29_0x2b;
    undefined field30_0x2c;
    undefined field31_0x2d;
    undefined field32_0x2e;
    undefined field33_0x2f;
}Layer;

extern Layer bgLayers[3];

extern u_char screenLayout[0x400];
extern u_char screenLayout2[0x400];
extern u_char screenLayout3[0x400];

extern SPRT_16 rectBuffer[2][1024];

extern u_char fadeFlags;

#endif