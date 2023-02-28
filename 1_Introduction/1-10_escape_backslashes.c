#include <stdio.h>
int main(void) {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else if(c == '\b') {
            putchar('\\');
            putchar('b');
        } else if(c == '\b') {
            putchar('\\');
            putchar('b');
        } else {
            putchar(c);
        }
    }
    return 0;
}