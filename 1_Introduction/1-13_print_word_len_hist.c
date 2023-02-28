#include <stdio.h>
#define MAXLEN 10
#define INSIDEWORD 1
#define OUTSIDEWORD 0

void storeWordCount(int arr[], int currWordLen) {
    // Since word length should be based on 1 based counting
    if (currWordLen == 0) {
        return;
    }
    currWordLen--;
    if (currWordLen > MAXLEN) {
        arr[MAXLEN]++;
    } else {
        arr[currWordLen]++;
    }
}

int main(void) {
    char c;
    int wordlen[MAXLEN + 1] = {0};
    
    int currentWord = 0;
    int state = OUTSIDEWORD;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n')  {
            state = OUTSIDEWORD;
            storeWordCount(wordlen, currentWord);

            currentWord = 0;
        } else if(state == OUTSIDEWORD) {
            state = INSIDEWORD;
        }
        if(state == INSIDEWORD) {
            currentWord++;
        }
    }

    if (currentWord > 0) {
        storeWordCount(wordlen, currentWord);
    }

    int maxVal = 0;
    for (int i = 0; i <= MAXLEN; i++) {
        if (maxVal < wordlen[i]) {
            maxVal = wordlen[i];
        }
    }


    // Printing horizontal histogram
    // for (int i = 0; i <= MAXLEN; i++) {
    //     printf("%3d   ", i+1);
    //     for (int j = 0; j < wordlen[i]; j++) {
    //         printf("|");
    //     }
    //     printf("\n");
    // }

    // Printing vertical histogram
    for (int i = maxVal; i > 0; i--) {
        printf("%3d  | ", i);
        for (int j = 0; j <= MAXLEN; j++) {
            if (wordlen[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("     + ");
    for (int i = 0; i <= MAXLEN; i++) {
        printf("--");
    }
    printf("\n");
    printf("       ");

    for (int i = 0; i <= MAXLEN; i++) {

        (i == MAXLEN) ? printf(">%d", i) : printf("%d ", i+1);
    }
    printf("\n");




    
}