#include <stdio.h>
#include <stdlib.h>
#include "memory.h"
#include "input.h"
#include "cpu.h"

typedef struct {
    Input input; // just has the joypad register
    CPU cpu; // will have all the CPU registers (each are 8 bit->you then combine htem to make some 16 bit)
    Memory memory; // from 0x0000 to 0xFFFF
    // PPU ppu;
    unsigned char interruptEnable; // interrupt enable register
    unsigned char interruptFlag; // interrupt flag register
} GameBoy;

int initialize_gameboy();

int initialize_gameboy(GameBoy* gameboy) {
}