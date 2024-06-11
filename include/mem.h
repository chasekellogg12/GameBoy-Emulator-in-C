#define MEMORY_SIZE 65535

typedef struct {
    unsigned char mem[MEMORY_SIZE]; // from 0x0000 to 0xFFFF
} Mem;

void initializeMem(Mem* mem);