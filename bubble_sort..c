#include<stdio.h>

void bubblesort(int arr[],int n){
    int i,temp,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }


        }
    }
}
int main(){
    int arr[]={2,4,5,8,1,7};
    int n=sizeof(arr)/sizeof (arr[0]);
    bubblesort(arr,n);
    printf("Sorted array\n");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
    
}