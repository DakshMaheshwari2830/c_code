// Write a program to recieve values of laltitude (L1,L2) and longitude (G1,G2) of two points on the earth's surface and calculate the distance between them using the Haversine formula.
#include <stdio.h>
#include<math.h>
int main(){
    int L1,L2;
    printf("enter the value of L1,L2\n");
    scanf("%d,%d",&L1,&L2);
    int G1,G2;
    printf("enter the value of G1,G2\n");
    scanf("%d,%d",&G1,&G2);
    int D;
    D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G1-G2));
    printf("%d",D);
    return 0;
}