#include<stdio.h>
#include<string.h>
int main()
{
    char N[10000];
    int y,i,j;
    while(1){
        scanf("%s",&N);
        y = 0;
        for(i=0;i<strlen(N);i++){
            y = y*10 + N[i]-'0';
            y = y%11;
        }
        if(strlen(N)==1 && y==0 )
            break;
        else if(y == 0)
            printf("%s is a multiple of 11.\n",N);
        else
            printf("%s is not a multiple of 11.\n",N);
        }
    return 0;
}
