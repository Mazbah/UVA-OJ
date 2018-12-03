#include<stdio.h>
#include<string.h>
int main()
{
    char str[104];
    int i,T,j,sum,l;
    scanf("%d",&T);
        for(i=1;i<=T;i++){
            sum = 0;
            scanf(" %[^\n]",str);
            l = strlen(str);
            for(j=0;j<l;j++){
                if((str[j]=='a')||(str[j]=='d')||(str[j]=='g')||(str[j]=='j')||(str[j]=='m')||(str[j]=='p')||(str[j]=='t')||
                   (str[j]=='w')||(str[j]==' '))
                    sum += 1;
                else if((str[j]=='b')||(str[j]=='e')||(str[j]=='h')||(str[j]=='k')||(str[j]=='n')||(str[j]=='q')||(str[j]=='u')||(str[j]=='x'))
                    sum+=2;
                else if((str[j]=='c')||(str[j]=='f')||(str[j]=='i')||(str[j]=='l')||(str[j]=='o')||(str[j]=='r')||(str[j]=='v')||(str[j]=='y'))
                    sum+=3;
                else if((str[j]=='s')||(str[j]=='z'))
                    sum+=4;
            }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
