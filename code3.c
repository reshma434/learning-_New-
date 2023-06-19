#include<stdio.h>
int calsum(int arr[],int len);

int main(){
    int arr[5],k,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(k=0;k < n ;k++){
    scanf("%d",&arr[k]);
    }
    int sum = calsum(arr,n);
    float avg = (float)sum/n;
    printf("sum is : %d", sum);
    printf("avg is : %.2f", avg);
}

int calsum(int arr[],int n){
    int sum =0,i;
    for (i=0;i<n;i++){
        sum = sum + arr[i]; 
    }
    return sum;
}

