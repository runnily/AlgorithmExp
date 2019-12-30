#include <stdio.h>  
#include <string.h>
#include <stdlib.h>

int sequential(char* array, char* num) {
    int find = atoi(num);
    for (int i = 0; i<strlen(array); i++) {
        if (atoi(&array[i]) == find ) {
            return 0;
        }
    }
    return -1;
}

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("wrong usage");
        return(EXIT_FAILURE);
    }
    
    if (sequential(argv[1], argv[2]) == 0) {
        printf("Found!\n");
    }
    else {
        printf("Not found\n");
    }
}

