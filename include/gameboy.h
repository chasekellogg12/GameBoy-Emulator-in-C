#include <stdio.h>
#include <stdlib.h>
#include "inp.h"
#include "cpu.h"

#define MEMORY_SIZE 65535

typedef struct {
    Inp inp; // just has the joypad register
    CPU cpu; // will have all the CPU registers (each are 8 bit->you then combine htem to make some 16 bit)
    Mem mem; // from 0x0000 to 0xFFFF
    unsigned char memory[MEMORY_SIZE];
    // PPU ppu;
    unsigned char interruptEnable; // interrupt enable register
    unsigned char interruptFlag; // interrupt flag register
} GameBoy;

void initializeGameboy(GameBoy* gameboy);