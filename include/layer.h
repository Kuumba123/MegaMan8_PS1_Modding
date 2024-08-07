#ifndef LAYER_H
#define LAYER_H
#include <stdbool.h>
#include <stdint.h>
#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>

typedef unsigned char   undefined;

typedef struct { /* BG Layer Defonation */
    bool display;
    uint8_t scrollType;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    uint8_t priority;
    int16_t x;
    int16_t y;
    int16_t pastX;
    int16_t pastY;
    int16_t baseX; /* mainly for layer 2 & 3 */
    int16_t baseY;
    int16_t borderR; /* cam borders */
    int16_t borderL;
    int16_t borderB;
    int16_t borderT;
    uint16_t autoBorderR; /* right side border for auto scroller */
    uint16_t autoBorderL;
    undefined field18_0x1e;
    undefined field19_0x1f;
    undefined field20_0x20;
    undefined field21_0x21;
    undefined field22_0x22;
    undefined field23_0x23;
    undefined field24_0x24;
    undefined field25_0x25;
    uint16_t autoSpeedX;
    uint16_t autoSpeedY;
    undefined field28_0x2a;
    undefined field29_0x2b;
    undefined field30_0x2c;
    undefined field31_0x2d;
    undefined field32_0x2e;
    undefined field33_0x2f;
}Layer;

extern Layer bgLayers[3];

extern uint8_t screenLayout[0x400];
extern uint8_t screenLayout2[0x400];
extern uint8_t screenLayout3[0x400];

extern SPRT_16 rectBuffer[2][1024];

extern uint8_t fadeFlags;

#endif