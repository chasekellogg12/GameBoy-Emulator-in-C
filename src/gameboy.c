#include "gameboy.h"

int initializeGameboy(GameBoy* gameboy) {
    initializeCPU(&gameboy->cpu);
    initializeMem(&gameboy->mem);
    initializeInp(&gameboy->inp);
    
    return 0;
}