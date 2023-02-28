#include <stdio.h>

int main(void) {
    char c;
    int encounteredSpace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && !encounteredSpace) {
            putchar(c);
            encounteredSpace = 1;
        } else if(c != ' ') {
            putchar(c);
            encounteredSpace = 0;
        }

    }
    return 0;
}