//Given three points (x1,y1) (x2,y2) (x3,y3) write a program to check whetehter they form a straight line or not.
#include<stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the  points (x1,y1), (x2,y2), (x3,y3):\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The points forms a straight line");
    } else {
        printf("The points  do not form a straight line.\n");
    }

    return 0;
}