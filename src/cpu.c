#include "cpu.h"
/* 
this file is for:
    - opcode decoding and exuction
    - register/flag management 
*/

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