#include "mem.h"
/* 
this file is for:
    - emulating the GameBoy's memory map.
    - RAM, VRAM, I/O registers, and external cartridge memory.
*/

void initializeMem(Mem* mem) {
    memset(mem->mem, 0, MEMORY_SIZE);
}