#ifndef COMMON_H
#define COMMON_H

#include <sys/types.h>
#include <stdbool.h>
#include <libgte.h>
#include <libgpu.h>
u_long * FntFlush(int id);
int FntPrint();

void ClearAll();
void CreateTransition(u_char type);

int GetRng();

void MemoryCopy(void *dest,void * src,int length);
void * memcpy(void * dest,void * src,int byteL);

void PacSeek(int id);
void PlaySound(ushort id);
void PlaySong(u_char id);
void StopSong();
int printf(char *fmt,...);
void puts(char * fmt);

void NewThread(int id,void * func);
void NewThread2(void * func);
void ThreadSleep(ushort frames);
void DeleteThread();
void DeleteThread2(int id);
void DeleteThreads();

void LoadCommon();

/*General Vars*/
extern ushort buttonsHeld;
extern ushort buttonsPressed;

extern u_char gameMode;
extern u_char gameMode2;
extern uint frameCount;

extern bool songLoading;
extern u_char pacStatus;


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