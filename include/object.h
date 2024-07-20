#ifndef OBJECT_H
#define OBJECT_H
#include <stdint.h>

typedef unsigned char   undefined;

typedef struct {
    bool spawned;
    uint8_t id;
    uint8_t var;
    uint8_t type;
    int16_t x;
    int16_t y;
}Enemy;

typedef struct{
    int16_t sprtFrame;
    uint8_t timer;
    uint8_t flags;

}AnimeFrame;

typedef struct {
    uint8_t width;
    uint8_t height;
    char offsetX;
    char offsetY;
    uint8_t extraHeight;
}Collide;

typedef struct
{
    uint8_t width;
    uint8_t height;
    char offsetX;
    char offsetY;
}HitBox;


typedef struct {
    bool alive;
    uint8_t act;
    uint8_t act2;
    uint8_t act3;
    uint8_t act4;
    bool onScreen;
    uint8_t id;
    uint8_t subId;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    int x;
    int y;
    int speedX;
    int speedY;
    int accelX;
    int accelY;
    uint8_t clut;
    uint8_t flip;
    uint8_t priority;
    uint8_t slot;
    AnimeFrame * animeP;
    uint16_t texCord;
    int16_t sprtFrame;
    uint8_t anime;
    uint8_t animeTimer; /* for specfic frame */
    uint8_t animeFlags;
    uint8_t collideFlag;
    int16_t pastX;
    int16_t pastY;
    Collide * collideP;
    HitBox * contactP;
    undefined field33_0x40;
    undefined field34_0x41;
    undefined field35_0x42;
    undefined field36_0x43;
    uint8_t damageId; /* for weapon damage to Object */
    uint8_t damage;
    bool immune;
    uint8_t hp;
    undefined field41_0x48;
    undefined field42_0x49;
    undefined field43_0x4a;
    undefined field44_0x4b;
    undefined field45_0x4c;
    undefined field46_0x4d;
    undefined field47_0x4e;
    undefined field48_0x4f;
    undefined field49_0x50;
    undefined field50_0x51;
    undefined field51_0x52;
    undefined field52_0x53;
    undefined field53_0x54;
    undefined field54_0x55;
    undefined field55_0x56;
    undefined field56_0x57;
    undefined field57_0x58;
    undefined field58_0x59;
    undefined field59_0x5a;
    undefined field60_0x5b;
    undefined field61_0x5c;
    undefined field62_0x5d;
    undefined field63_0x5e;
    undefined field64_0x5f;
}Object;

typedef struct { /* megaman's properties */
    bool alive;
    uint8_t status;
    uint8_t state;
    uint8_t subState;
    undefined field4_0x4;
    bool display;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    int x;
    int y;
    int speedX;
    int speedY;
    int accelX;
    int accelY;
    uint8_t clut;
    uint8_t flip;
    undefined field20_0x26;
    undefined field21_0x27;
    struct AnimeFrame * animeP;
    uint16_t texCord;
    uint16_t sprtFrame;
    uint8_t anime;
    uint8_t animeTimer; /* for specfic frame */
    uint8_t animeFlags;
    uint8_t collideFlag;
    int16_t pastX;
    int16_t pastY;
    struct Collide * collideP;
    struct HitBox * contactP;
    undefined field33_0x40;
    undefined field34_0x41;
    undefined field35_0x42;
    undefined field36_0x43;
    undefined field37_0x44;
    undefined field38_0x45;
    undefined field39_0x46;
    uint8_t hp;
    undefined field41_0x48;
    undefined field42_0x49;
    undefined field43_0x4a;
    undefined field44_0x4b;
    undefined field45_0x4c;
    undefined field46_0x4d;
    undefined field47_0x4e;
    undefined field48_0x4f;
    undefined field49_0x50;
    undefined field50_0x51;
    undefined field51_0x52;
    undefined field52_0x53;
    undefined field53_0x54;
    undefined field54_0x55;
    undefined field55_0x56;
    uint16_t held;
    uint16_t held_old;
    uint16_t press;
    undefined field59_0x5d;
    undefined field60_0x5e;
    undefined field61_0x5f;
    undefined field62_0x60;
    undefined field63_0x61;
    undefined field64_0x62;
    undefined field65_0x63;
    undefined field66_0x64;
    undefined field67_0x65;
    undefined field68_0x66;
    undefined field69_0x67;
    undefined field70_0x68;
    undefined field71_0x69;
    undefined field72_0x6a;
    undefined field73_0x6b;
    undefined field74_0x6c;
    undefined field75_0x6d;
    undefined field76_0x6e;
    undefined field77_0x6f;
    undefined field78_0x70;
    undefined field79_0x71;
    undefined field80_0x72;
    undefined field81_0x73;
    undefined field82_0x74;
    uint8_t collideTimer; /* no collision timer */
    undefined field84_0x76;
    undefined field85_0x77;
    undefined field86_0x78;
    undefined field87_0x79;
    undefined field88_0x7a;
    undefined field89_0x7b;
    undefined field90_0x7c;
    undefined field91_0x7d;
    undefined field92_0x7e;
    undefined field93_0x7f;
    undefined field94_0x80;
    undefined field95_0x81;
    undefined field96_0x82;
    undefined field97_0x83;
    undefined field98_0x84;
    undefined field99_0x85;
    undefined field100_0x86;
    undefined field101_0x87;
    undefined field102_0x88;
    undefined field103_0x89;
    undefined field104_0x8a;
    undefined field105_0x8b;
    undefined field106_0x8c;
    undefined field107_0x8d;
    undefined field108_0x8e;
    undefined field109_0x8f;
    undefined field110_0x90;
    undefined field111_0x91;
    undefined field112_0x92;
    undefined field113_0x93;
    undefined field114_0x94;
    undefined field115_0x95;
    undefined field116_0x96;
    undefined field117_0x97;
    undefined field118_0x98;
    undefined field119_0x99;
    undefined field120_0x9a;
    undefined field121_0x9b;
    undefined field122_0x9c;
    undefined field123_0x9d;
    undefined field124_0x9e;
    undefined field125_0x9f;
    undefined field126_0xa0;
    undefined field127_0xa1;
    undefined field128_0xa2;
    undefined field129_0xa3;
    undefined field130_0xa4;
    undefined field131_0xa5;
    undefined field132_0xa6;
    undefined field133_0xa7;
}Mega;
extern Mega mega;
#define megaX *(int16_t*)((int)&mega.x + 2)
#define megaY *(int16_t*)((int)&mega.y + 2)


extern Object* contactObjectP;
extern uint8_t contactWeaponId;

extern uint16_t objectTexCords[80];
extern uint8_t objectClut[80];


void AnimeAdvance(int objP);

void CollideCheck(Object *objP);
uint CollideHitBox(Object *objP,Mega *m,uint8_t idk);

int ContactMega(Object *objP);
int ContactWeapon(Object *objP);

void DeleteObject(Object *objP);
void DeleteObject2(Object *objP);
void DeleteObject3(Object *objP);

void DisplayObject(Object *objP);
void DisplayObject2(Object *objP,int dis);
void DisplayObject3(Object *objP);

Object * FindMainObjectSlot(Object *objP);

void GetMegaDirection(Object * objP);

Object * GetMainObject();
Object * GetItemObject();
Object * GetMiscObject();
Object * GetEffectObject();


void MoveObject(Object *objP);
void MoveObject2(Object *objP);
void MoveObject3(Object *objP);
void MoveObject4(Object *objP);

void MoveObjectH(Object *objP);
void MoveObjectV(Object *objP);

bool ObjectContactCheck(Object*p,Object*p2);

bool OnScreenCheck(Object * objP);

void SetAnime(int objP,uint8_t id);
void SetAnime2(Object *objP,uint8_t id,uint8_t flags);

void SetObjectSettings(Object *objP);

void SteroSound(Object *objP,uint16_t id);

int SpawnDrop(Object *objP,uint chanceIndex);
void SpawnExplosion(Object *objP);
void SpawnJunk(Object *objP,int junkCount);
void SpawnJunk2(Object *objP,int set);
Object * SpawnSmoke(int16_t x,int16_t y,uint8_t subId);

#endif