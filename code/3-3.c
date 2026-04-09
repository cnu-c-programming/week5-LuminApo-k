#include <stdio.h>

int main() {
    int val = 7;
    int other = 10;

    int *p = &val;

    p = &other;
    p = &val;

    printf("%d\n", *p);  // 7

    return 0;
}
