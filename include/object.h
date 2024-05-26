#ifndef OBJECT_H
#define OBJECT_H
#include <sys/types.h>

typedef struct {
    bool spawned;
    u_char id;
    u_char var;
    u_char type;
    short x;
    short y;
}Enemy;

typedef struct{
    short sprtFrame;
    u_char timer;
    u_char flags;

}AnimeFrame;

void AnimeAdvance(int objP);

//void DisplayObject(Object *objP);

void SetAnime(int objP,u_char id);
//void SetAnime2(Object *objP,u_char id,u_char flags);

#endif