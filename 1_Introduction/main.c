#include <stdio.h>

// Defining constants
#define UPPER 300
#define LOWER 0
#define STEP 20

// Farh to cel program
void farToCel(float upper, float lower, float step) {
    float farh = lower;
    printf("Farh  Cel\n");
    while (farh <= upper) {
        float cel = (5.0/9) * (farh - 32); 
        printf("%3.0f %6.1f\n", farh, cel);
        farh+=step;
    }
}

long countChar(void) {
    long nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    return nc;
}

void farToCelRev(float upper, float lower, float step) {
    // EX 1-5 Go from upper to lower
    float farh = upper;
    printf("Farh Cel\n");
    while (farh >= 0) {
        float cel = (5.0/9) * (farh - 32); 
        printf("%3.0f %6.1f\n", farh, cel);
        farh -= step;

    }
}




int main(void) {
    farToCelRev(UPPER, LOWER, STEP);
    printf("%i",EOF);
}
