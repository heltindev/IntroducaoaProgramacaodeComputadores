#include <stdio.h>

int main() {
    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);

    return 0;
}