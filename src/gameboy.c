#include "gameboy.h"

void initializeGameboy(GameBoy* gameboy) {
    initializeCPU(&gameboy->cpu);
    initializeInp(&gameboy->inp);
    memset(gameboy->memory, 0, MEMORY_SIZE); // initialize the memory
    return 0;
}