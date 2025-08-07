#include <stdio.h>
int lonelyInteger(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    } 
        return -1;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result=lonelyInteger(arr, n);
    printf("%d",result);
}