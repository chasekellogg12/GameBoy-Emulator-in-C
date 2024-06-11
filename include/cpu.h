// combine these 8-bit flags to create a 16 bit register (like HL or AF for instance)
#include "gameboy.h"
typedef struct {
    unsigned char A; // accumulator
    unsigned char F; // flags -> consists of carry (c), half carry (h), subtraction (n), and z (zero)
    unsigned char B; 
    unsigned char C;
    unsigned char D;
    unsigned char E;
    unsigned char H;
    unsigned char L;
    unsigned short sp; // stack counter
    unsigned short pc; // program counter
} CPU;

void initializeCPU(CPU* cpu);
void executeInstruction(GameBoy* gameboy);
unsigned short getAF(CPU* cpu);
void setAF(CPU* cpu, unsigned short val);
unsigned short getBC(CPU* cpu);
void setBC(CPU* cpu, unsigned short val);
unsigned short getDE(CPU* cpu);
void setDE(CPU* cpu, unsigned short val);
unsigned short getHL(CPU* cpu);
void setHL(CPU* cpu, unsigned short val);

