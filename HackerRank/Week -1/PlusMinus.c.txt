#include<stdio.h>
void plusMinus(int arr[],int n){
    float positive=0,negative=0,zeros=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }else{
            zeros++;
        }
        
    }
    printf("%6f\n",positive/n);
      printf("%6f\n",negative/n);
        printf("%6f\n",zeros/n);
}int main(){
    int n;
    scanf("%d Enter the no.of elements : ",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d Enter the values: ",&arr[i]);
    }
    plusMinus(arr, n);
}