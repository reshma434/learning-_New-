#include<stdio.h>
#include<math.h>
int revarray(int arr[],int n);

int main(){
    int arr[20],i,n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of the array :"); 
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    revarray(arr,n);
    printf("the reverse is:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}

int revarray(int arr[],int n){
    int start=0;
    int end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
} 
