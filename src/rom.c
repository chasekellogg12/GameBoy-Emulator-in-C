#include "rom.h"
/* 
this file is for:
    - Loading ROM files.
    - Managing memory banks (MBC1, MBC3, etc.).
*/

// MBC => many games use Memory Bank Controllers to expand avaible adderss space
    // this is located on the cartridge you put into the GameBoy (not actually in the console itself)
    // basically extra memory for the ROM not part of the gameboy
// the required MBC is specified at byte 0x0147 of the ROM (cartridge header)
// 0x0000 -> 0x3FFF: ROM bank 00 (fixed bank, always loaded from the ROM)
// 0x4000 -> 0x7FFF: ROM banks 01-NN ()

// the first 0x0000 - 0x3FFF (16 KB) is loaded directly into the fixed ROM bank


int loadROM(GameBoy* gameboy, char* filename) {

}