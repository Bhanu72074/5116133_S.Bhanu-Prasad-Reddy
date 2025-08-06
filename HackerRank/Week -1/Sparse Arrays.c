#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* matchingStrings(char strings[][100],char queries[][100],int n,int q){
     int* results=malloc(q*(sizeof(int)));
    for(int i=0;i<q;i++){
        int count=0;
    
    for(int j=0;j<n;j++){
        if(strcmp(queries[i],strings[j])==0){
            count++;
        }
    }
        results[i]=count;
    }
    return results;
    }
int main(){
    int n;
    scanf("%d",&n);
    char strings[1000][100];
    for(int i=0;i<n;i++){
        scanf("%s",strings[i]);
    }
    int q;
     scanf("%d",&q);
     char queries[1000][100];
    for(int i=0;i<q;i++){
        scanf("%s",queries[i]);
    }
   int *results= matchingStrings(strings,queries,n,q);
   for(int i=0;i<q;i++){
    printf("%d\n", results[i]);
   }
    free(results);
    return 0;
}