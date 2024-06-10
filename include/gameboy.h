#include <stdio.h>
#include <stdlib.h>

#define MEMORY_SIZE 65535

typedef struct {
    unsigned char memory[MEMORY_SIZE]; // from 0x0000 to 0xFFFF

} GameBoy;

int initialize_gameboy();