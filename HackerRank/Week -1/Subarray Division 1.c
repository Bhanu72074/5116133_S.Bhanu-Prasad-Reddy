#include<stdio.h>
int birthday(int a[],int b, int c, int d){
    int count=0;
    for(int i=0;i<=b-d;i++){
        int sum=0;
        for(int j=0;j<d;j++){
            sum+=a[i+j];
        }
        if(sum==c){
            count++;
        }
    }
    return count;
}
int main(){
    int b;
    scanf("%d",&b);
    int a[b];
    for(int i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    int c,d;
    scanf("%d %d",&c,&d);
    int results=birthday(a,b,c,d);
    printf("%d\n",results);
    return 0;
}