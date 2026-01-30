#include <stdio.h>
int main() {
    int a = 4, b = 5, *p1 = &a, *p2 = &b;
    printf("Product = %d", (*p1) * (*p2));
    return 0;
}