#include <stdio.h>
#include "highscore.h"        // so we get access to firstYear and function declaration

void printHighscores(void) {
    printf("Scores ab %d:\n", firstYear);  // use the global variable
}