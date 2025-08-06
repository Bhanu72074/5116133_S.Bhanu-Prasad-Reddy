#include<stdio.h>
#include<string.h>
char* timeConversion(char* timeInput){
    int h,m,s;
    char ampm[3];
    char* formattedTime=malloc(10);
    if(formattedTime==0){
        printf("NULL");
    }
    sscanf(timeInput, "%2d:%2d:%2d%2s",&h,&m,&s,ampm);
    if(strcmp(ampm,"AM")==0&&h==12){
        h=0;
    }else if(strcmp(ampm,"PM")==0&&h!=12){
        h=h+12;
    }
    sprintf(formattedTime,"%02d:%02d:%02d",h,m,s);
    return formattedTime;
}
int main(){
    char input[11];
    scanf("%s",input);
    char* result=timeConversion(input);

    printf("%s\n",result);
    free(result);
}
