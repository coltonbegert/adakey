#include <stdio.h>

int main() {
    unsigned char n[3] = {254,0,0};
    printf("%d,%d,%d\n", n[0], n[1], n[2]);
    for (int i =0; i < 8; i++) {
        // printf("%d,%d,%d, %d:%d\n", n[0], n[1], n[2], 2 - i / 2, n[2 - i / 2] + (2 - (1 + 2 * (i / 4))) * 127);

        n[(2 - i / 2) * (2 - (1 + 2 * (i / 6)))] = n[(2 - i / 2) * (2 - (1 + 2 * (i / 6)))] + (2 - (1 + 2 * (i / 4))) * 127;
        printf("%d,%d,%d, %d:%d\n", n[0], n[1], n[2], (2 - i / 2) * (2-(1 +2* (i / 6))), (2 - (1 + 2 * (i / 4))) * 127);
    }
}