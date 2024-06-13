#include "cpu.h"
/* 
this file is for:
    - opcode decoding and exuction
    - register/flag management 
*/


void initializeCPU(CPU* cpu) { 
    // these registers are set to the values that a Boot ROM would set them to in a DMG gameboy
    cpu->pc = 0x0100; // start execution at 0x0100 
    cpu->sp = 0xFFFE; // typical starting value for SP
    cpu->A = 0x01;
    cpu->F = 0xB0; // Flags register (Z, N, H, C flags set as: 1011 0000) -> if header checksum is $00, H and C should be 0 otherwise 1
    cpu->B = 0x00;
    cpu->C = 0x13;
    cpu->D = 0x00;
    cpu->E = 0xD8;
    cpu->H = 0x01;
    cpu->L = 0x4D;
}

void executeInstruction(GameBoy* gameboy) {
    // memory[0x1000] -> memory[0x3FFF] contains the ROM's instructions 
    // treat the bits in the opcode as -> XXYYYZZZ
        // XX can be 11 (3), 10 (2), 01 (1), or 00 (0)
            // FOR 00:
                // 
            // FOR 01:
                // LD r[y], r[z] if z != 6 and y != 6. Else:
                // HALT
    // 00 000 000 => NOP
    // 11 110 000 => STOP
    // 01 000 000 => LD
    unsigned char opcode = gameboy->memory[gameboy->cpu.pc];
    switch (opcode) {
        case (0x00): // NOP
            gameboy->cpu.pc += 1;
            break;
        default:
            fprintf(stderr, "Error: unknown opcode\n");
            break;
    }
}

unsigned short getAF(CPU* cpu) {
    unsigned short res = ((unsigned short) cpu->A << 8) | cpu->F;
    return res;
}

void setAF(CPU* cpu, unsigned short val) {
    cpu->A = val >> 8; // just the upper 8 bits of val
    cpu->F = val; // just the lower 8 bits of val
}

unsigned short getBC(CPU* cpu) {
    unsigned short res = ((unsigned short) cpu->B << 8) | cpu->C;
    return res;
}

void setBC(CPU* cpu, unsigned short val) {
    cpu->B = val >> 8; // just the upper 8 bits of val
    cpu->C = val; // just the lower 8 bits of val
}

unsigned short getDE(CPU* cpu) {
    unsigned short res = ((unsigned short) cpu->D << 8) | cpu->E;
    return res;
}

void setDE(CPU* cpu, unsigned short val) {
    cpu->D = val >> 8; // just the upper 8 bits of val
    cpu->E = val; // just the lower 8 bits of val
}

unsigned short getHL(CPU* cpu) {
    unsigned short res = ((unsigned short) cpu->H << 8) | cpu->L;
    return res;
}

void setHL(CPU* cpu, unsigned short val) {
    cpu->H = val >> 8; // just the upper 8 bits of val
    cpu->L = val; // just the lower 8 bits of val
}