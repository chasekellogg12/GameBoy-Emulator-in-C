#include <stdlib.h>
#include <stdio.h>
#include "rom.h"
#include "gameboy.h"

/* 
this file is for:
    - command line argument handling
    - initialization of SDL for video and input
    - main emulation loop
    - timing / synchronization
*/

int initialize_screen();

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: ./main [ROM PATH]\n");
        exit(1);
    }
    
    if (initialize_screen()) {
        fprintf(stderr, "Error initializing screen\n");
        exit(1);
    }
    
    GameBoy gameboy;
    int err;
    
    err = initialize_gameboy(&gameboy);
    if (err) {
        fprintf(stderr, "Error initializing gameboy\n");
        exit(1);
    }

    err = loadROM(&gameboy, argv[1]);
    if (err) {
        fprintf(stderr, "Error loading ROM\n");
        exit(1);
    }

    int quit = 1;
    while (quit) { // continuously emulate a cycle until quit
        // emulate cycle

        // handle display

        // handle input
    }

    return 0;
}

int initialize_screen() {
    return 0;
}