#include<stdio.h>
#include<ctype.h>
int main(){
    char s[1000];
    int letters[26]={0},count=0;
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++){
        char c= tolower(s[i]);
        if(c>='a'&& c<='z'){
            if(!letters[c - 'a']){
            letters[c - 'a']=1;
            count++;
        }
    }
    }
if(count==26){
    printf("pangram\n");
}else{
    printf("not pangram\n");
    return 0;
}
}