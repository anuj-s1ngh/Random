#include<stdio.h>


int main() {
    char arr[3][3];
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            arr[i][j] = ' ';
        }
    }


    // Layman's Approach

    printf(" %c | %c | %c ", arr[0][0], arr[0][1], arr[0][2]);
    printf("\n");
    printf("---|---|---");
    printf("\n");
    printf(" %c | %c | %c ", arr[1][0], arr[1][1], arr[1][2]);
    printf("\n");
    printf("---|---|---");
    printf("\n");
    printf(" %c | %c | %c ", arr[2][0], arr[2][1], arr[2][2]);
    printf("\n");


    printf("\n");
    printf("\n");
    

    // Simple Loop / Smart Approach

    for (int i=0; i<3*2-1; i++) {
        if (i % 2 == 0) {
            printf(" %c | %c | %c ", arr[i/2][0], arr[i/2][1], arr[i/2][2]);
        } else {
            printf("---|---|---");
        }
        
        printf("\n");
    }


    printf("\n");
    printf("\n");


    // Nested Loop / Complicated Approach

    for (int i=0; i<3*2-1; i++) {
        for (int j=0; j<3*3+2; j++) {
            if ((j+1) % 4 == 0) {
                printf("|");
                continue;
            }
            if (i % 2 == 0) {
                if ((j-1) % 4 == 0) {
                    printf("%c", arr[i/2][(j-1)/4]);
                } else {
                    printf(" ");
                }
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

}
