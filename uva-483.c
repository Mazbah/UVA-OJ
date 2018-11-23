#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,l,j,b;
    while(gets(str))
    {
        l = strlen(str);
        b=-1;
        for(i=0;i<l;i++){
            if(str[i]==' '){
                for(j=i-1;j>b;j--)
                    printf("%c",str[j]);
                    printf(" ");
                    b = i;
            }
          }
         for(i=l-1;i>b;i--)
                printf("%c",str[i]);
                printf("\n");
    }
    return 0;
}
