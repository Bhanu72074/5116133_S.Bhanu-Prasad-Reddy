#include <stdio.h>
int sockMerchant(int n,int arr[]){
    int count[200]={0};
    int pair=0;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
}
for(int i=0;i<200;i++){
    pair=pair+count[i]/2;
}

return pair;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=sockMerchant(n,arr);
   printf("%d",result);
   
}