#ifndef COMMON_H
#define COMMON_H
#include <stdint.h>
#include <stdbool.h>
#include <libgte.h>
#include <libgpu.h>

u_long * FntFlush(int id);
int FntPrint();

void ClearAll();
void CreateTransition(uint8_t type);

int GetRng();

void MemoryCopy(void *dest,void * src,int length);
void * memcpy(void * dest,void * src,int byteL);

void PacSeek(int id);

void PlaySound(uint16_t id);
void PlaySong(uint8_t id);
void StopSong();
void StopSound(uint16_t id);

int printf(char *fmt,...);
void puts(char * fmt);

void NewThread(int id,void * func);
void NewThread2(void * func);
void ThreadSleep(uint16_t frames);
void DeleteThread();
void DeleteThread2(int id);
void DeleteThreads();

void LoadCommon();

/*General Vars*/
extern uint16_t buttonsHeld;
extern uint16_t buttonsPressed;

extern uint8_t gameMode;
extern uint8_t gameMode2;
extern uint32_t frameCount;

extern bool songLoading;
extern uint8_t pacStatus;


enum PadButtons{
    PAD_L1 = 4,
    PAD_R1 = 8,
    PAD_L2 = 1,
    PAD_R2 = 2,
    PAD_SELECT = 0x100,
    PAD_START = 0x800,
    PAD_UP = 0x1000,
    PAD_RIGHT = 0x2000,
    PAD_DOWN = 0x4000,
    PAD_LEFT = 0x8000,
    PAD_TRIANGLE = 0x10,
    PAD_CIRCLE = 0x20,
    PAD_CROSS = 0x40,
    PAD_SQUARE = 0x80
};

#endif