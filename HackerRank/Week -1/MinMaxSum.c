#include <stdio.h>
void miniMaxSum(int arr[],int n){
    long total_sum=0;
    long min_sum=arr[0];
    long max_sum=arr[0];
    for(int i=0;i<n;i++){
        total_sum=total_sum+arr[i];
        if(arr[i]<min_sum)
            min_sum=arr[i];
        if(arr[i]>max_sum)
            max_sum=arr[i];
            
        }
    
     long min_total=total_sum-max_sum;
     long max_total=total_sum-min_sum;
    printf("%ld %ld\n", min_total,max_total );
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    miniMaxSum(arr, 5);
}