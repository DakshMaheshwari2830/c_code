#include <stdio.h>
void quicksort(int a[], int l, int h) {
    if (l >= h) return;
    int i = l, j = h, p = a[(l + h) / 2], t;
    while (i <= j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            t = a[i]; a[i] = a[j]; a[j] = t;
            i++; j--;}}
    quicksort(a, l, j);
    quicksort(a, i, h);
}
int main() {
    int a[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}