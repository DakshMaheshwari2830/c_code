#include <stdio.h>
int main() {
    int a[5], *p, i;
    for(i=0;i<5;i++) scanf("%d",&a[i]);

    p = &a[4];
    for(i=0;i<5;i++)
        printf("%d ", *(p--));
    return 0;
}