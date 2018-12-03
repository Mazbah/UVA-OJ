#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    int n,i,j,l,d,a;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf(" ");
        gets(str);
        l = strlen(str);
        d = l/n;
        for(i=1;i<=n;i++){
            a = i*d;
            for(j=a-1;j>=a-d;j--){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
