#include "inp.h"
/*
this file is for:
    - Mapping host system inputs to GameBoy buttons.
    - Handling input registers.
*/

void initializeInp(Inp* inp) {
    inp->joyp = 0xFF; // All buttons start unpressed
}