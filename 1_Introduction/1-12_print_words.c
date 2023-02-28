#include <stdio.h>


int main(void) {
    char c;
    int encspace = 0;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t' || c == '\n') && !encspace) {
            encspace = 1;
            putchar('\n');
        } else {
            encspace = 0;
            putchar(c);
        }
    }
}