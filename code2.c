#include<stdio.h>

int main(){
    int arr[20],i,n;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    // now to find min and max
    int j , min=arr[0], max=arr[0];
    for(j=0;j < n-1;j++){
        if (arr[j] > arr[j+1]){
            min=arr[j+1];
            max=arr[j];
        }
        else{
            min=arr[j];
            max=arr[j+1];
        }
       
    }
    if (min != max){
    printf("the max in array is: %d",max);
    printf("the min in array is: %d",min);
    }
    else 
     printf("all are equal");
  return 0;
}
