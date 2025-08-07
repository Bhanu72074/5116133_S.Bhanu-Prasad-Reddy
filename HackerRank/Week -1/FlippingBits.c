#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        unsigned int q;
        scanf("%u",&q);
        printf("%u\n",~q);
    }
    return 0;
}