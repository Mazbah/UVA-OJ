#include<stdio.h>
int main()
{
    char s[1000];
    int i,x;
    while(gets(s)){
        x = 0;
        for(i=0;s[i]!='\0';i++){
            if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && (s[i+1]<'a' || s[i+1]>'z') && (s[i+1]<'A' || s[i+1]>'Z'))
            x++;
        }
        printf("%d\n",x);
    }
    return 0;
}
