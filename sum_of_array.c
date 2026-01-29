#include <stdio.h>

int main() {
    int arr[50],i,n,sum=0;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    };
    printf("Elements are");
    for(i=0;i<=n-1;i++){
        printf("%d",arr[i]);
        sum=sum+arr[i];
    };
    printf("%d\n",sum);
    

    return 0;
}